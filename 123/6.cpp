#include <iostream>
using namespace std;

int char2int(char s){
    if (s >= 'a' && s <= 'z') return s-'a';
    else return s-'A';
}

char int2char(int s, char c){
    if (c >= 'A' && c <= 'Z') return s+'A';
    return s+'a';
}

int main(){
    string s1, s2; cin >> s1 >> s2;
    int s1n = s1.size();
    for (int i = 0; i < s2.size(); i++){
        char a = s1[i%s1n];
        char b = s2[i];
        int d = char2int(a);
        int e = char2int(b);
        int s = e-d;
        if (s < 0) s += 26;
        char c = int2char(s, s2[i]);
        cout << c;
    }

    return 0;
}