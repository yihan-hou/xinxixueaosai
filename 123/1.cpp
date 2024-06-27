#include <iostream>
#include <vector>
using namespace std;

int str2int(string c){
    int n = 0;
    for (char i:c){
        n = n * 10 + (i-'0');
    }
    return n;
}

int main(){
    string nfn; cin >> nfn;
    char f;
    vector<string> strs;
    string cur = "";
    for (char c:nfn){
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
            f = c;
            strs.push_back(cur);
            cur = "";
        }
        else cur += c;
    }

    int a = str2int(strs[0]);
    int b = str2int(cur);

    if (f == '+') cout << a+b << endl;
    else if (f == '-') cout << a-b << endl;
    else if (f == '*') cout << a*b << endl;
    else if (f == '/') cout << a/b << endl;
    else if (f == '%') cout << a%b << endl;\

    return 0;
}