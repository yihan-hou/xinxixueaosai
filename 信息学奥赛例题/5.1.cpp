#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> split(vector<int> buf, int i){
    vector<int> buf1;
    for (int j = 0; j < i; j++) buf1.push_back(buf[j]);
    for (int j = i+1; j < buf.size(); j++) buf1.push_back(buf[j]);
    return buf1;
}

bool ss(int a, int b){
    int s = a+b;
    for (int i = 2; i < s; i++){
        if (s%i == 0) return false;
    }
    return true;
}

vector<vector<int>> qpl(vector<int> buf, int j){
    vector<vector<int>> res;
    if (buf.size() == 1 && ss(buf[0], j)) return {buf};
    for (int i = 0; i < buf.size(); i++){
        if (j == 0 && buf[i] != 1) return res;
        if (ss(buf[i], j)) {
            vector<vector<int>> res1 = qpl(split(buf, i), buf[i]);
            for (vector<int> res2:res1){
                res2.insert(res2.begin(), buf[i]);
                if (j == 0 && !ss(*res2.begin(), *res2.rbegin())) continue;
                else res.push_back(res2);
            }
        }
    }
    return res;
    /*vector<vector<int>> res2;
    for (auto res1:res){
        for (int i = 0; i < res1.size(); i++){
            if (i == 0 && res1[i] == 1) res2.push_back(res1);
        }
    }
    return res2;*/
}

int main(){
    int n; cin >> n;
    vector<int> buf;
    for (int i = 1; i <= n; i++) buf.push_back(i);
    vector<vector<int>> res = qpl(buf, 0);
    for (vector<int> res1:res){
        for (int i = 0; i < res1.size(); i++){
            cout << res1[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}