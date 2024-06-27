#include "bignum.hpp"
#include <cassert>
using namespace numbers;

int main() {
    string a, b; cin >> a >> b;
    (bigint(a)/b).print();
    cout << ' ';
    (bigint(a)%b).print();
    cout << endl;
    return 0;
}