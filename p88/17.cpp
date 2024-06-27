#include <iostream>
using namespace std;

struct Rect {
    int a;
    int b;
    int g;
    int h;
    bool in(int x, int y){
        if (a <= x && x <= a+g && b <= x && x <= b+h) return true;
        return false;
    }
};

int main()
{
    int n; cin >> n;
    Rect buf[n];
    for (int i = 0; i < n; i++){
        cin >> buf[i].a;
        cin >> buf[i].b;
        cin >> buf[i].g;
        cin >> buf[i].h;
    }
    int x, y; cin >> x >> y;
    int c = -1;
    for (int i = n-1; i >= 0; i--){
        if (buf[i].in(x, y)){
            c = i+1;
            break;
        }
    }
    cout << c << endl;
    return 0;
}