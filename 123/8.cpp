#include <iostream>
using namespace std;

int he(int c){
    return c*(c+1)/2;
}

int main(){
    int n; cin >> n;
    for (int c = 1;;c++){
        for (int m = 1; m <= c; m++){
            if (he(c)-3*m == n){
                cout << m << ' ' << c << endl;
                return 0;
            }
        }
    }
}