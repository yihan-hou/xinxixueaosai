#include <iostream>
#include <vector>
using namespace std;

string fanzhuan(string s){
    int n = s.size();
    int m = n-1;
    if (n == 0) return "";
    return s[n-1] + fanzhuan(s.substr(0, m));
}

int main(){
    string s;
    char buf[501];
    cin.getline(buf, sizeof(buf));
    s = buf;
    s += " ";
    vector<string> strs;
    string cur;
    for (char c:s){
        if (c == ' '){
            strs.push_back(cur);
            cur = "";
        }
        else cur += c;
    }

    for (string c:strs){
        cout << fanzhuan(c) << " ";
    }
    return 0;
}