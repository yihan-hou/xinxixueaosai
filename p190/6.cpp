#include <iostream>
#include <vector>
using namespace std;

void jingwei(auto& buf){
    int k = 0;
    for (int i = 1; i < buf.size(); i++){
        buf[i] += buf[i-1]/10;
        buf[i-1] %= 10;
    }
    while (buf[buf.size()-1] >= 10){
        buf.push_back(buf[buf.size()-1] / 10);
        buf[buf.size()-2] %= 10;
    }
    //{0, 2, 1}
}
auto fractorial(int n) {
    vector<int> buf = {1};
    for (int i = 2; i <= n; i++){
        for (auto& c : buf) c *= i;
        jingwei(buf);
    }
    return buf;
}

auto add(auto buf, auto res){
    for (int i = res.size(); i < buf.size(); i++) res.push_back(0);
    for (int i = 0; i < buf.size(); i++){
        res[i] += buf[i];
    }
    return res;
}

void print(vector<int> res){
    for (auto i = res.rbegin(); i != res.rend(); i++){
        cout << *i;
    }
}

int main(){
    int n; cin >> n;
    vector<int> res = {0};
    for (int n1 = 1; n1 <= n; n1++){
        auto buf = fractorial(n1);
        res = add(buf, res);
        jingwei(res);
    }
    print(res);
}