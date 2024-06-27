#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int buf0[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> buf0[i][j]; 
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int a; cin >> a;
            buf0[i][j] += a;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << buf0[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}