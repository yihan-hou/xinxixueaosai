#include <iostream>
using namespace std;
#include <vector>

string get_line() {
    char buf[256];
    cin.getline(buf, sizeof(buf));
    return buf;
}

int main() {
    string str = get_line();
    str += ' ';
    vector<string> strs;
    string cur;
    for (char c:str){
        if (c == ' ' || c == ','){
            if (cur != "") strs.push_back(cur);
            cur = "";
        }
        else cur += c;
    }
    int max = 0;
    int min = 0;
    for(int k = 0; k < strs.size(); ++k) {
        if (strs[k].size() > strs[max].size()) max = k;
        else if (strs[k].size() < strs[min].size()) min = k;
    }

    cout << strs[max] << endl;
    cout << strs[min] << endl;
    return 0;
}