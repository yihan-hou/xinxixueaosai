#include <iostream>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    int p = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            int a; cin >> a;
            if (i * j == 0 || i == r-1 || j == c-1){
                p += a;
            }
        }
    }
    cout << p << endl;
    return 0;
}