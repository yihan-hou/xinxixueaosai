#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int max(vector<int> res){
    int m = res[0];
    for (int i = 1; i < res.size(); i++){
        if (res[i] > m) m = res[i];
    }
    return m;
}

int search(vector<vector<char>> buf, int x, int y, unordered_set<char> s, int t){
    if ((x == -1 || x == buf.size() || y == -1 || y == buf[x].size() || s.count(buf[x][y]) != 0) && t != 0){
        return t;
    }
    else s.insert(buf[x][y]);
    vector<int> m = {search(buf, x-1, y, s, t+1), search(buf, x+1, y, s, t+1), search(buf, x, y-1, s, t+1), search(buf, x, y+1, s, t+1)};
    s.erase(buf[x][y]);
    int max = m[0];
    for (int i = 1; i < 4; i++){
        if (m[i] > max) max = m[i];
    }
    return max;
}

int main(){
    int r, s; cin >> r >> s;
    vector<vector<char>> buf;
    for (int i = 0; i < r; i++){
        vector<char> buf1;
        for (int j = 0; j < s; j++){
            char s; cin >> s;
            buf1.push_back(s);
        }
        buf.push_back(buf1);
    }
    unordered_set<char> s1;
    cout << search(buf, 0, 0, s1, 0) << endl;
    return 0;
}