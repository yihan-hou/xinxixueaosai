#include <iostream>
#include <vector>
#include "sort.hpp"
using namespace std;
using namespace sort;


int main(){
    int n; cin >> n;
    vector<int> odd;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (a%2 == 1) odd.push_back(a);
    }
    bubble(odd.begin(), odd.end());
    cout << odd[0];
    for (int i = 1; i < odd.size(); i++) cout << ',' << odd[i];
    cout << endl;
    return 0;
}