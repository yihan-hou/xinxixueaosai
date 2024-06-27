#include <iostream>
#include "bignum.hpp"
using namespace std;
using namespace numbers;

int main(){
    int n; cin >> n;
    bigint buf(1);
    for (int i = 0; i < n; i++){
        buf = buf * 2;
    }
    buf.print();
}