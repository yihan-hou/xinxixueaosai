#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int buf[n][m];
    int buf1[m][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> buf[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            buf1[i][j] = buf[j][i];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << buf1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}