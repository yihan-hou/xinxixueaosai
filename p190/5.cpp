#include <iostream>
#include "bignum.hpp"
using namespace std;
using namespace numbers;

int main(){
    int n; cin >> n;
    bigint buf(1);
    for (int i = 1; i <= n; i++) buf = buf * i;
    buf.print();
}