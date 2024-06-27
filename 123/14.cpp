#include <iostream>
using namespace std;

int int2njz(string c, int i){
    int nx = 0;
    for (char c1:c){
        int x = c1-'0';
        if (x >= i) return -1;
        nx = x + nx * i;
    }
    return nx;
}

int main(){
    string p, q, r; cin >> p >> q >> r;
    for (int i = 2; i <= 40; i++){
        int s = int2njz(p, i);
        int t = int2njz(q, i);
        int u = int2njz(r, i);
        if ((s != -1 && t != -1 && u != -1) && s*t == u){
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}