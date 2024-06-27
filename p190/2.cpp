#include <iostream>
#include <vector>
using namespace std;

void tw(auto& buf0){
    int n = 0;
    for (int i = 0; i < buf0.size(); i++){
        if (buf0[i]-n < 0) {
            buf0[i] += (10-n);
            n = 1;
        }
        else{
            buf0[i] -= n;
            n = 0;
        }
    }
}

int main(){
    string s1, s2; cin >> s1 >> s2;
    vector<int> buf0;
    vector<int> buf1;
    for (auto i = s1.rbegin(); i != s1.rend(); ++i){
        buf0.push_back(*i-'0');
    }
    for (auto i = s2.rbegin(); i != s2.rend(); ++i){
        buf1.push_back(*i-'0');
    }
    for (int i = 0; i < buf1.size(); i++){
        buf0[i] -= buf1[i];
    }
    tw(buf0);
    while(buf0.size() > 1 && *buf0.rbegin() == 0) buf0.pop_back();
    for (auto i = buf0.rbegin(); i != buf0.rend(); i++) cout << *i;
    //buf0.size() == 0 &&
}