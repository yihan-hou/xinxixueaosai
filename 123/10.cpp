#include <iostream>
using namespace std;

bool ynss(int i){
    for (int j = 2; j < i; j++){
        if (i%j == 0) return false;
    }
    return true;
}

int main(){
    int m, n; cin >> m >> n;
    int p = 0;
    for (int i = m; i <= n; i++){
        if (ynss(i) && i > 1){
            p++;
        }
    }
    cout << p << endl;
    return 0;
}