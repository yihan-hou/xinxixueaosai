#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Two_intAB{
    int a;
    int b;
    bool operator < (Two_intAB n){
        if (b < n.b) return true;
        return false;
    }
};

int dict_num(vector<Two_intAB> buf){
    sort(buf.begin(), buf.end());
    int t = 0;
    for (int i = 0, c = -1; i < buf.size(); i++){
        if (c >= buf[i].a) continue;
        t++;
        c = buf[i].b;
    }
    return t;
}

int main(){
    int n; cin >> n;
    vector<Two_intAB> buf;
    for (int i = 0; i < n; i++){
        Two_intAB m; cin >> m.a >> m.b;
        buf.push_back(m);
    }
    cout << dict_num(buf) << endl;
    return 0;
}