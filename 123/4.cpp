#include <iostream>
#include <vector>
using namespace std;

void lower(string& s){
    for (char& c:s) {
        if (c >= 'A' && c <= 'Z') c = c-'A'+'a';
    }
}

vector<string> split(string s){
    vector<string> strs;
    string cur = "";
    s += ' ';
    for (char c:s){
        if (c == ' '){
            strs.push_back(cur);
            cur = "";
        }
        else cur+=c;
    }
    return strs;
}
int main(){
    string s1; cin >> s1;
    string s2;
    char buf[100001];
    do {
        cin.getline(buf, 100001); s2 = buf;
    }while(!s2.size());
    lower(s1); lower(s2);
    auto strs = split(s2);
    int n = 0;
    int n1 = 0;
    for (int i = 0; i < strs.size(); i++){
        if (strs[i] == s1) {
            if (n == 0) n1 = i;
            n++;
        }
    }

    if (n != 0) cout << n << ' ' << n1 << endl;
    else cout << -1 << endl;
    return 0;
}