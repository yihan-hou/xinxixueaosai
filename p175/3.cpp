#include <iostream>
#include <cstring>
using namespace std;

int cha(char* s, char c){
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == c) return i+1;
    }
    return -1;
}

int main(){
    char* s = new char [1000];
    cin >> s;
    char c; cin >> c;
    if (cha(s, c) == -1) cout << "no" << endl;
    else cout << cha(s, c) << endl;
}