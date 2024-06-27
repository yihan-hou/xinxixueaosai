#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    bool buf1[n+1];
    for (int i = 0; i <= n; i++){
        buf1[i] = true;
    }
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (j % i == 0) buf1[j] = !buf1[j];
        }
    }
    bool x = false;
    for (int i = 1; i <= n; i++){
        if (!buf1[i]) {
            if (x) cout << ',';
            cout << i;
            x = true;
        }
    }
    return 0;
}