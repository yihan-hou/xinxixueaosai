#include <iostream>
#include <string.h>
using namespace std;

string mjzzh(int x, int m){
    int a = x/m;
    int a0 = x%m;//a0 = x-km
    if (x == 0) return "";
    if (a0 < 10) return mjzzh(a, m) + char('0' + a0);
    else return mjzzh(a, m) + char('A' + (a0-10));
}

int main(){
    int x; cin >> x;
    int m; cin >> m;
    cout << mjzzh(x, m) << endl;
    return 0;
}