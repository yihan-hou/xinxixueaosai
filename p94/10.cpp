#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int buf[n][m];
    int buf1[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> buf[i][j];
            buf1[i][j] = buf[i][j];
        }
    }

    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < m-1; j++){
            double t = double(buf[i][j] + buf[i][j-1] + buf[i][j+1] + buf[i-1][j] + buf[i+1][j]) / 5;
            buf1[i][j] = int(t+0.5);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << buf1[i][j] << " ";
        }
        cout << endl;
    }
}