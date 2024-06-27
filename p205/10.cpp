#include <iostream>
#include <map>
using namespace std;

int main(){
    string s; cin >> s;
    map<char, int> counts;
    for (char i:s){
        if (counts.count(i) == 0) counts[i] = 1;
        else counts[i] += 1; 
    }
    char maxf = ' ';
    int maxc = 0;
    for (auto k:counts){
        if (k.second > maxc){
            maxf = k.first;
            maxc = k.second;
        }
    }
    cout << maxf << ' ' << maxc << endl;
    return 0;
}