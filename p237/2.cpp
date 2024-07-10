#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> f(string str){
    if (str.size() == 1) return {str};
    vector<string> res;
    for (int i = 0; i < str.size(); i++){
        string str1 = str.substr(0, i) + str.substr(i+1, str.size());
        vector<string> res1 = f(str1);
        for (string r1:res1) {
            res.push_back(str[i]+r1);
        }
    }
    return res;
}

int main(){
    string str; cin >> str;
    vector<string> res = f(str);
    for (string i:res) cout << i << endl;
    return 0;
}