#include <iostream>
#include <math.h>
#include <string>
using namespace std;
string s(int n);
string g(int i){
    if (i == 1) return "2";
    if (i == 0) return "2(0)";
    else return "2(" + s(i) + ")";
}

int f(int n){
    int i = 0;
    while (pow(2, i) <= n){
        i++;
    }
    if (i == 0) return -1;
    return i-1;
}

string s(int n){
    /*if (n == 0) return "";
    if (n == 1) return "+2(0)";
    if (n == 2) return "+2";
    
    return "+2(" + s(i-1).substr(1) + ")" + s(n-pow(2, i-1));*/
    int i = f(n);
    if (i == -1) return "";
    string c = g(i);
    string a = s(n-pow(2, i));
    if (a != "") return c+"+"+a;
    else return c;
}

int main(){
    int n; cin >> n;
    cout << s(n) << endl;
    return 0;
}