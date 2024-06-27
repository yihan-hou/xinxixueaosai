#include <iostream>
#include "sort.hpp"
using namespace sort;

int main() {
    int n; cin >> n;
    int buf[n];
    for (int k = 0; k < n;++k) {
        buf[k] = rand() % 100;
    }
    bubble(buf, buf + n);
    vector<int> buf1;
    for (int k = 0; k < n; ++k)
        buf1.push_back(rand() % 100);
    bubble(buf1.begin(), buf1.end());
}