#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<int, int64_t> dict;

int64_t f(int a){
    if (a == 1 || a == 2) return 1;
    if (dict.count(a) == 0)
    {
        dict.insert({a, f(a-1)+f(a-2)});
    }
    return dict[a];
}

int main(){
    int n; cin >> n;
    vector<int64_t> buf;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        buf.push_back(f(a));
    }
    for (int64_t i:buf) cout << i << endl;
    return 0;
}