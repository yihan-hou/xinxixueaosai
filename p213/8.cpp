#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> g(unordered_set<int> buf0, int a) {
    unordered_set<int> buf1;
    for (int i:buf0){
        buf1.insert(i + a);
        buf1.insert(i - a);
    }
    return buf1;
}

unordered_set<int> f(vector<int> buf){
    unordered_set<int> buf0;
    buf0.insert(buf[0]);
    buf0.insert(-buf[0]);
    for (int j = 1; j < buf.size(); j++){
        buf0 = g(buf0, buf[j]);
    }
    return buf0;
}

string print(int k, vector<int> buf){
    unordered_set<int> buf0;
    buf0 = f(buf);
    for (int i:buf0){
        if (i % k == 0) return "YES";
    }
    return "NO";
}

int main(){
    int n, k; cin >> n >> k;
    vector<int> buf;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        buf.push_back(a);
    }
    cout << print(k, buf) << endl;
}