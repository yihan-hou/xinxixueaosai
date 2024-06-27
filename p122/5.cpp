#include <iostream>
using namespace std;

int yzzh(int n){
    int p = 0;
    for (int i = 1; i < n; i++){
        if (n%i == 0) p += i;
    }
    return p;
}

int main(){
    for(int n = 2;;n++) {
        int m = yzzh(n);
        if (m != n && n == yzzh(m)){
            cout << n  << ' ' << m << endl;
            return 0;
        }
    }
}