#include <iostream>
using namespace std;

int main(){
    string pswd;
    char buf[101];
    cin.getline(buf, sizeof(buf));
    pswd = buf;
    for (char& i:pswd){
        if (i >= 'a' && i <= 'z') i = i - 'a' + 'A';
    }
    cout << pswd << endl;
    return 0;
}