#include <iostream>
#include "sort.hpp"
#include <time.h>
#include <chrono>
#include <cassert>
using namespace std;
using namespace sort;

int main(){
    int n; cin >> n;
    vector<int> buf;
    while (n--) {
        buf.push_back(rand() % 100);
    }
    //for (auto s:buf) cout << s << ' ';
    //cout << endl;
    auto now = std::chrono::system_clock::now();
    auto t0 = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
    //bubble(buf.begin(), buf.end());
    auto buf1 = buf;
    quick(buf.begin(), buf.end());
    merge(buf1.begin(), buf1.end());
    assert(buf == buf1);
    now = std::chrono::system_clock::now();
    auto t1 = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
    //for (auto s:buf) cout << s << ' ';
    cout << (t1 - t0).count() << endl;
}