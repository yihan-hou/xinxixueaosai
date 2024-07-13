#include <iostream>
using namespace std;

int main(){
    int k, p, n, d, x; cin >> k >> p >> n >> d >> x;
    int a = x/p;
    if (a > k) a = k;
    if (a >= n) {
        p = p*(100-d)/100;
        a = x/p;
    }
    cout << a << endl;
    return 0;
}