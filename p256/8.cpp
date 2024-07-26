#include <iostream>
#include <vector>
using namespace std;

int search(vector<vector<bool>>& buf, int x, int y, int s){
    if (x < 0 || y < 0 || x > buf.size()-1 || y > buf[0].size()-1 || buf[x][y]) return 0;
    else if (s == buf.size()*buf[0].size()) return 1;
    buf[x][y] = 1;
    int dx[] = {-1, -1, 1, 1, -2, -2, 2, 2};
    int dy[] = {2,  -2, 2, -2, 1, -1, 1, -1};
    int t = 0;
    for(int k = 0; k < 8; ++k) {
        t += search(buf, x+dx[k], y+dy[k], s+1);
    }
    
    buf[x][y] = 0;
    return t;
}

int main(){
    int a; cin >> a;
    for (int k = 0; k < a; k++){
        int n, m, x, y; cin >> n >> m >> x >> y;
        vector<vector<bool>> buf;
        for (int i = 0; i < n; i++){
            vector<bool> buf1;
            for (int j = 0; j < m; j++){
                buf1.push_back(0);
            }
            buf.push_back(buf1);
        }
        cout << search(buf, x, y, 1) << endl;
    }
    return 0;
}