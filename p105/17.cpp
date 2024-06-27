#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str; cin >> str;
    str += " ";
    vector<string> strs;
    string cur = "";
    char p = str[0];
    for (char c:str){
        if (c != p) {
            cout << cur.size() << cur[0];
            cur = c;
            p = c;
        }
        else cur += c;
    }
    return 0;
}