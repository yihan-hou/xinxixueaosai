#include <iostream>
#include <vector>
#include <string>
using namespace std;

string f1(string n){
    for (int i = 0; i < n.size()-1; i++){
        if (int(n[i])>=int(n[i+1])){
            n.erase(n.begin()+i);
            return n;
        }
    }
    return n.substr(0, n.size()-1);
}

string f(string n, int k){
    for (int i = 0; i < k; i++){
        n = f1(n);
    }
    return n;
}

int main(){
    int t; cin >> t;
    vector<string> buf;
    for (int i = 0; i < t; i++){
        string n; cin >> n;
        int k; cin >> k;
        buf.push_back(f(n, k));
    }
    for (string s:buf) cout << s << endl;
    return 0; 
}