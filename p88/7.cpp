#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int buf0[n];
    int buf1[n];
    int c = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        buf0[i] = a;
    }
    for (int i = 0; i < n; i++){
        int b; cin >> b;
        buf1[i] = b;
    }
    for (int i = 0; i < n; i++){
        c += buf0[i] * buf1[i];
    }
    cout << c << endl;
}