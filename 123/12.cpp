#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

bool ynss(int j){
    for (int k = 2; k <= sqrt(j); k++){
        if (j%k == 0) return false;
    }
    return true;
}

int main(){
    int m, n; cin >> m >> n;
    int k = 1;
    for (int i = m; i <= n; i++){
        int fi = 0;
        string i1 = to_string(i);
        //string i2 = string(i1.rbegin(), i1.rend());
        int a = 1;
        for (char j:i1) {
            fi += a * (j-'0');
            a *= 10;
        }
        if (ynss(i) && ynss(fi)){
            if (k == 1) cout << i;
            else cout << ',' << i;
            k = 0;
        }
    }
    if (k == 1) cout << "No";
}