#include <iostream>
using namespace std;

int main(){
    int n, m, x; cin >> n >> m >> x;
    int v = 20/(5-1);
    int t = (x-1) * v;
    m += t;
    if (m >= 60){
        n += m/60;
        m %= 60;
    }
    if (n >= 24){
        n %= 24;
    }
    cout << n << ' ' << m << endl;
    return 0;
}