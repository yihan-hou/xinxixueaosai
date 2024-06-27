#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, int64_t> m;
int64_t f(int a){
    if(a == 1 || a == 2) return a;
    if(a == 3) return 4;
    if (m.count(a) > 0) return m[a];
    int64_t fn = f(a-1) + f(a-2) + f(a-3);
    m[a] = fn;
    return fn;
}

int main(){
    vector<int64_t> buf;
    while (true){
        int a; cin >> a;
        if (a == 0) break;
        else buf.push_back(f(a));
    }
    for (int i = 0; i < buf.size(); i++) cout << buf[i] << endl;
}