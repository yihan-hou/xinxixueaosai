#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct point{
    int x;
    int y;
    bool operator < (point a){
        if (y > a.y){
            return 1;
        }
        else if (y == a.y) {
            if (x >= a.x) return 1;
            else return 0;
        }
        return 0;
    }
};

vector<point> f(vector<point> buf){
    sort(buf.begin(), buf.end());
    vector<point> buf1 = {buf[0]};
    for (int i = 1; i < buf.size(); i++){
        if (buf[i].x <= buf1.back().x) continue;
        buf1.push_back(buf[i]);
    }
    return buf1;
}

int main(){
    int n; cin >> n;
    vector<point> buf;
    for (int i = 0; i < n; i++){
        point p; cin >> p.x >> p.y;
        buf.push_back(p);
    }
    vector<point> res = f(buf);
    for (int i = 0; i < res.size(); i++){
        if (i != 0) cout << ',';
        cout << '(' << res[i].x << ',' << res[i].y << ')';
    }
    cout << endl;
    return 0;
}