#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, n; cin >> x >> n;
    if (x == 1) cout << n+1 << endl;
    else cout << (1.0 - pow(x, n + 1.0)) / (1.0 - x) << endl;
}
