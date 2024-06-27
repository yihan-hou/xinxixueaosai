#include "bignum.hpp"
#include <cassert>
using namespace numbers;

int main() {
    string n, m; cin >> n >> m;
    bigint a(n);
    bigint b(m);
    if (a > b) cout << ">" << ' ';
    if (a < b) cout << "<" << ' ';
    if (a == b) cout << "= ";
    if (a >= b) cout << ">= ";
    if (a <= b) cout << "<= ";
    cout << endl;
    return 0;
}