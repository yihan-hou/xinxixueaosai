#include <iostream>
#include <cmath>
using namespace std;

bool ynss(int j){
    for (int k = 2; k <= sqrt(j); k++){
        if (j%k == 0) return false;
    }
    return true;
}

int main(){
    int m, n; cin >> m >> n;
    for (int i = m; i <= n; i++){
        int t = 2;
        int i1 = i;
        for (int j = 2; j <= i1; j++){
            if (ynss(j) && i1%j == 0) {
                t = j;
                while(i1 % t == 0) i1 /= t;
            }
        }
        if (i == m) cout << t;
        else cout << ',' << t;
    }
    return 0;
}