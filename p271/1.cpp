#include <iostream>
#include <string>
#include <vector>
using namespace std;

int onenum(string bin){
    int p = 0;
    for (char c:bin){
        if (c == '1')p++;
    }
    return p;
}

string int2bin(int n){
    string bin = "";
    while (n != 0){
        int x = n%2;
        bin += to_string(x);
        n /= 2;
    }
    return bin;
}

int bin2int(string s){
    int n = 0;
    int b = 1;
    for (int i = 0; i < s.size(); i++){
        n += (s[i]-'0')*b;
        b *= 2;
    }
    return n;
}

string enable(string nb){
    nb += '0';
    int p = 0;
    int e = 0;
    string s1 = ""; string s2 = "";
    for (char c:nb){
        switch (e)
        {
        case 0:
            if (c == '1') {e = 1; p++;}
            else e = 0; 
            break;
        case 1:
            if (c == '1') p++;
            else e = 2;
            break;
        }
        s2 += c;
        if (e == 2)break;
    }
    int p1 = p;
    s1 = nb.substr(s2.size());
    for (int i = 0; i < s2.size(); i++){
        if (i == s2.size()-1 || p > 1){
            s2[i] = '1';
            p--;
        }
        else s2[i] = '0';
    }
    
    return s2+s1;
}

int bin_number(int n){
    string nb = int2bin(n);
    return bin2int(enable(nb));
}

int main(){
    int n1; cin >> n1;
    vector<int> buf;
    for (int i = 0; i < n1; i++){
        int n; cin >> n;
        buf.push_back(bin_number(n));
    }
    cout << "-----------------" << endl;
    for (int i:buf) cout << i << endl;
}