#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int buf[n];
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        buf[i] = a;
        int b = 0;
        for (int j = 0; j < i; j++){
            if (buf[j] != a) b++;
        }
        if (b == i) cout << a << " ";
    }
    return 0;
}