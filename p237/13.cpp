#include <iostream>
#include <string>
#include <map>
using namespace std;

bool ss(int i) {
    for (int j = 2; j < i / 2; j++) {
        if (i % j == 0) return false;
    }
    return true;
}

string f(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && ss(i)) {
            return to_string(i) + "*" + f(n / i);
        }
    }
    return "";
}

map<string, int> dict;

string g(string c) {
    string cut = "";
    for (char s:c){
        if (s == '*'){
            if (dict.count(cut) != 0) {
                dict[cut] += 1;
            }
            else dict[cut] = 1;
            cut = "";
        }
        else cut += s;
    }
    string s = "";
    for (auto kv:dict){
        if (kv.second == 1) s += kv.first+"*";
        else {
            s += kv.first + "^" + to_string(kv.second) + "*";
        }
    }
    return s;
}

int main() {
    //int n; cin >> n;
    for (int n = 2; n <= 100; n++){
        string c = f(n);
        c = g(c);
        cout << c.substr(0, c.size() - 1) << endl;
        dict.clear();
    }   
}