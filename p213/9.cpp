#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

struct point {
    int x;
    int y;
    bool operator == (const point& other) {
        return x == other.x && y == other.y;
    }
};
namespace std {
    template<>
    struct hash<point> {
        size_t operator()(const point& p)const {
            return p.x + p.y * 100000;
        }
    };
    template<>
    struct equal_to<point> {
        bool operator()(const point& a, const point& b)const {
            return a.x == b.x && a.y == b.y;
        }
    };
}

unordered_set<point> set;
int f(point p, int n){
    //if n == 0:
    //  如果p点已经走过，就返回0
    //  否则并返回1
    if (set.count(p) != 0) return 0;

    if (n == 0) {
        return 1;
    }
    set.insert(p);
    int a = f({p.x-1, p.y}, n-1);
    int b = f({p.x, p.y+1}, n-1);
    int c = f({p.x+1, p.y}, n-1);
    set.erase(p);
    return a + b + c;
}

int main(){
    int n; cin >> n;
    point p = {0, 0};
    cout << f(p, n) << endl;
}