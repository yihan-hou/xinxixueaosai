#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

string zf(string n){
    string  f = "";
    for (char i:n){
        f = i+f;
    }
    return f;
}

auto zhuanhuan(string n) {
    string f = zf(n);
    vector<int> list;
    for (int i = 0; i < f.size(); i++) list.push_back(f[i]-'0'); 
    return list;
}

string he(auto buf0, auto buf1){
    string f = "";
    int n = 0;
    for (int i = 0; i < buf0.size(); i++){
        int a = buf0[i];
        int b = buf1[i];
        if (a+b+n >= 10){
            f += to_string((a+b+n)%10);
            n = 1;
        }
        else {
            f += to_string(a+b+n);
            n = 0;
        }
    }
    if (n == 1) f += "1";
    return f;
}

string print(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] != '0') return s.substr(i);
    }
    return "0";
}

int main(){
    string n0; cin >> n0;
    string n1; cin >> n1;
    auto buf0 = zhuanhuan(n0); 
    auto buf1 = zhuanhuan(n1);
    if (buf0.size() > buf1.size()){
        for (int i = buf1.size(); i < buf0.size(); i++) buf1.push_back(0);
    }
    else if (buf0.size() < buf1.size()){
        for (int i = buf0.size(); i < buf1.size(); i++) buf0.push_back(0);
    }
    cout << print(zf(he(buf0, buf1))) << endl;
    return 0;
}