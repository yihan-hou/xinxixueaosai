#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    char buf[501];
    cin.getline(buf, sizeof(buf));
    s = buf;
    vector <string> strs;
    string cur = "";
    for (char c:s){
        if (c == ' ' || c == '.'){
            strs.push_back(cur);
            cur = "";
        } 
        else cur += c;
    }
    int max = 0;

    for (int i = 0; i < strs.size(); i++){
        if (strs[i].size() > strs[max].size()) max = i;
    }

    cout << strs[max] << endl;
    return 0;
}