#include <iostream>
#include <vector>
#include "sort.hpp"
#include <algorithm>
using namespace std;
using namespace sort;

int main(){
    string sentense;
    char buf[5099 + 1000];
    cin.getline(buf, 6099);
    sentense = buf;
    sentense += ' ';
    vector<string> words;
    string cur = "";
    for (char c:sentense){
        if (c == ' '){
            if (cur != ""){
                if(find(words.begin(), words.end(), cur) == words.end())
                    words.push_back(cur);
                cur = "";
            }
        }
        else cur += c;
    } 
    merge(words.begin(), words.end());
    for (string i:words) cout << i << endl;
}