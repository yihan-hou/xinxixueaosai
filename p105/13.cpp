#include <iostream>
using namespace std;

int main(){
    string s1; cin >> s1;
    int n = s1.size();
    if (s1.substr(n-2) == "er" || s1.substr(n-2) == "ly"){
        cout << s1.substr(0, n-2) << endl;
    }

    else if (s1.substr(n-3) == "ing"){
        cout << s1.substr(0, n-3) << endl;
    }

    else cout << s1 << endl;
    return 0;
}