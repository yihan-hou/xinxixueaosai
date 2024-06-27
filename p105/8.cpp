#include <iostream>
using namespace std;

int main(){
    string pswd;
    char buf[256];
    cin.getline(buf, sizeof(buf));
    pswd = buf;
    for (char& i:pswd){
        if (i >= 'A' && i <= 'Z') i = (i - 'A' + 1) % 26 + 'A';
        else if (i >='a' && i <= 'z') i = (i - 'a' + 1) % 26 + 'a';
        else continue;
    }
    cout << pswd << endl;
}