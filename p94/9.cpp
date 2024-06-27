#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    //int buf[n][m];
    int buf1[m][n];
    double x0 = double(m-1)/2;
    double y0 = double(n-1)/2;
    for (int y = 0; y < n; y++){
        for (int x = 0; x < m; x++){
            double x1 = x-x0;
            double y1 = y-y0;
            double x2 = -y1+y0; 
            double y2 = x1 + x0;
            cin >> buf1[int(y2)][int(x2)];
        }
    }

    for (int y = 0; y < m; y++){
        for (int x = 0; x < n; x++){
            cout << buf1[y][x] << " ";
        }
        cout << endl;
    }
}