#include <iostream>
using namespace std;

bool ynwqs(int i){
    int p = 0;
    for (int j = 1; j < i; j++){
        if (i%j == 0) p += j;
    }
    if (p == i) return true;
    return false;
}

int main(){
    int n; cin >> n;
    for (int i = 2; i <= n; i++){
        if (ynwqs(i)) cout << i << endl;
    }
    return 0;
}