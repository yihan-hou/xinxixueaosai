#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef vector<vector<char>> grid_t;

int redANDblack(int w, int h, int ax, int ay, int t, grid_t& buf, map<grid_t, int>& cache){
    if (ax == -1 || ax == buf.size() || ay == -1 || ay == buf[ax].size() || (buf[ax][ay] != '.' && buf[ax][ay] != '@')){
        return t;
    }
    if (cache.count(buf)) return cache[buf];
    buf[ax][ay] = '0';
    int best = max({
        redANDblack(w, h, ax-1, ay, t + 1, buf, cache),
        redANDblack(w, h, ax+1, ay, t + 1, buf, cache),
        redANDblack(w, h, ax, ay-1, t + 1, buf, cache),
        redANDblack(w, h, ax, ay+1, t + 1, buf, cache)});
    return cache[buf] = best;
}

int main(){
    int w,h; cin >> w >> h;
    int ax = 0; 
    int ay = 0;
    grid_t buf;
    for (int i = 0; i < h; i++){
        vector<char> buf1;
        for (int j = 0; j < w; j++){
            char c; cin >> c;
            if (c == '@'){
                ax = i;
                ay = j;
            }
            buf1.push_back(c);
        }
        buf.push_back(buf1);
    }
    int i, j; cin >> i >> j;
    map<grid_t, int> cache;
    cout << redANDblack(h, w, ax, ay, 1, buf, cache) << endl;
    return 0;
}