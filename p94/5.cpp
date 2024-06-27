#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int buf0[m][n]; int buf1[m][n];

    for (int i = 0; i < 2*m; i++){
        for (int j = 0; j < n; j++){
            int a; cin >> a;
            if (i >= m) buf1[i-m][j] = a;
            else buf0[i][j] = a;
        }
    }
    int p = 0;
    for (int i = 0; i < m; i++){
        for (int k = 0; k < n; k++){
            if (buf0[i][k] == buf1[i][k]) p++;
        }
    }
    cout << setprecision(2) << fixed << double (p) / (m * n) * 100 << endl;
}