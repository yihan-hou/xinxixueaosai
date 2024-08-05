#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct ride{
    int v;
    int t;
};

double g(int v){
    return v/3.6;
}

int f(ride i){
    auto b = g(i.v);
    auto a = 4500/b+i.t;
    return ceil(a);
}

int min_time(vector<ride> buf){
    vector<int> res;
    for (ride i:buf){
        if (i.t < 0) continue;
        res.push_back(f(i));
    }
    return *min_element(res.begin(), res.end());
}

int main(){
    vector<int> buf;
    while(true){
        int n; cin >> n;
        if (n == 0) break;
        vector<ride> buf1; 
        for (int i = 0; i < n; i++){
            ride r; cin >> r.v >> r.t;
            buf1.push_back(r);
        }
        buf.push_back(min_time(buf1));
    }
    for (int i:buf) cout << i << endl;
    return 0;
}