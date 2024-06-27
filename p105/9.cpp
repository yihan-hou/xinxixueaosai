#include <iostream>
using namespace std;

string zhuanhuan(string mm){
    if (mm.size() == 0) return "";
    return zhuanhuan(mm.substr(1)) + mm[0];
}

int main(){
    string mm; cin >> mm;
    string e = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for (char& i:mm){
        if (i >= 'a' && i <= 'z'){
            i = (i - 'a' + 3) % 26 + 'a';
            i = i - 'a' + 'A';
        }
        else{
            i = (i - 'A' + 3) % 26 + 'A';
            i = i - 'A' + 'a';
        }
    }
    cout << zhuanhuan(mm) << endl;
}