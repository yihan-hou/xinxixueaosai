#include <iostream>
#include <vector>
using namespace std;

bool labyrinth_yn(vector<vector<char>> buf, int ha, int la, int hb, int lb){
    if (ha == hb && la == lb) {
        return 1;
    }
    if ((ha == -1 || la == -1 || ha == buf.size() || la == buf.size()) || buf[ha][la] != '.'){
        return 0;
    }
    buf[ha][la] = '0';
    bool u = labyrinth_yn(buf, ha-1, la, hb, lb);
    bool d = labyrinth_yn(buf, ha+1, la, hb, lb);
    bool l = labyrinth_yn(buf, ha, la-1, hb, lb);
    bool r = labyrinth_yn(buf, ha, la+1, hb, lb);
    buf[ha][la] = '.';
    return u||d||l||r;
}

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int s; cin >> s;
        vector<vector<char>> buf;
        for (int j = 0; j < s; j++){
            vector<char> buf1;
            for (int k = 0; k < s; k++){
                char c; cin >> c;
                buf1.push_back(c);
            }
            buf.push_back(buf1);
        }
        int ha, la, hb, lb; cin >> ha >> la >> hb >> lb;
        if (labyrinth_yn(buf, ha, la, hb, lb)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}