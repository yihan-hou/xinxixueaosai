#include <iostream>
#include "bignum.hpp"

using namespace std;
using namespace numbers;

int main(){
    string n1, n2; cin >> n1 >> n2;
    //bigint buf1(n1); bigint buf2(n2); bigint buf3 = buf1 * buf2;
    (bigint(n1) * n2).print();
}