#include <iostream>
using namespace std;

int main(){
    int n, m, k; cin >> n >> m >> k;
    int buf0[n][m]; int buf1[m][k];
    int p = 0; int q = 1;
    for (int x = 0; x < n; x++){
        for (int y = 0; y < m; y++){
            cin >> buf0[x][y];
            
        }
    }

    for (int x = 0; x < m; x++){
        for (int y = 0; y < k; y++){
            cin >> buf1[x][y];
        }
    }

    for (int x = 0; x < n; x++){
        for (int y = 0; y < k; y++){
            int p = 0;
            for (int z = 0; z < m; z++){
                p += buf0[x][z] * buf1[z][y];
            }
            cout << p << " ";
        }
        cout << endl;
    }
}