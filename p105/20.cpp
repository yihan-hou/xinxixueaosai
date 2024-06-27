#include <iostream>
using namespace std;

bool lianxv(string inc){
    char i = inc[0];
    int p = 0;
    for (char s:inc){
        if (s == i) p++;
    }

    if (p == inc.size()) return true;
    return false;
}

int main(){
    int k; cin >> k;
    string c; cin >> c;
    for (int i = 0; i < (int)c.size()-k+1; i++){
        string inc = c.substr(i, k);

        if (lianxv(inc)){
            cout << inc[0] << endl;
            return 0;
        }

    }
    cout << "no" << endl;
    return 0;
}