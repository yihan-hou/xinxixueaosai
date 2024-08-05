#include <iostream>
using namespace std;

int _next(int n) {
    int k = 1;
    while(0 == (n&k)) k <<= 1;
    int m = k+n;
    int o = (m^n) / k / 4;
    return m+o;
}

int main() {
    int n;
    cin >> n;
    cout << _next(n) << endl;
}