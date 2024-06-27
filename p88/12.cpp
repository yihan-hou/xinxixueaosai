#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int buf[n];
    for (int i = 0; i < n; i++){
        int a; cin >> a; buf[i] = a;
    }
    int max = buf[0];
    for (int i = 0; i < n; i++){
        if (buf[i] > max) max = buf[i];
    }
    int p = 0;
    for (int i = 0; i < n; i++){
        if (buf[i] != max) p += buf[i];
    }
    cout << p << endl;
    return 0;
}