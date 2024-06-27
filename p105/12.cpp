#include <iostream>
#include <string>
using namespace std;

bool substr(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    for (int i = 0; i < m-n; i++){
        if (s2.substr(i, n) == s1) return true;
    }
    return false;
}

int main(){
    string s1; cin >> s1; string s2; cin >> s2;
    if (substr(s1, s2)){
        cout << s1 << " is substring of " << s2 << endl;
    }

    else if (substr(s2, s1)){
        cout << s2 << " is substring of " << s1 << endl;
    }

    else cout << "No substring" << endl;
    return 0;
}