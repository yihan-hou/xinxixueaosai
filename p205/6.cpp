#include <iostream>
#include <vector>
#include "sort.hpp"
using namespace std;
using namespace sort;

int main(){
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < 10; i++){
        int a; cin >> a;
        if (a%2 == 1) odd.push_back(a);
        else even.push_back(a);
    }
    merge(odd.rbegin(), odd.rend());
    merge(even.begin(), even.end());
    for(int i:odd) cout << i << ' ';
    for(int i:even) cout << i << ' ';
    cout << endl;
}