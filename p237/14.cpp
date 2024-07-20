#include <iostream>
#include <vector>
using namespace std;

int string2int(string cut){
    int n = 0;
    for (char c:cut){
        n = n*10+(c-'0');
    }
    return n;
}

vector<int> split(string s){
    s += ',';
    vector<int> buf;
    string cut = "";
    for (char c:s){
        if (c == ','){
            buf.push_back(string2int(cut));
            cut = "";
        }
        else cut += c;
    }
    return buf;
}

bool f(int k, int x){
    if (k == x) return true;
    else if (k > x) return false;
    bool a = f(k*2+1, x);
    bool b = f(k*3+1, x);
    if (a||b) return true;
    return false;
}

int main(){
    string s; cin >> s;
    vector<int> buf = split(s);
    bool t = f(buf[0], buf[1]);
    if (t == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}