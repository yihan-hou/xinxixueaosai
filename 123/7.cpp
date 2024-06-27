#include <iostream>
using namespace std;

bool ynss(int i){
    for (int j = 2; j < i; j++){
        if (i%j == 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    for (int i = 2; i < n-1; i++){
        if (ynss(i) && ynss(i+2)) cout << i << ' ' << i+2 << endl;
    }
    return 0;
}