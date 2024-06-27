#include <iostream>
using namespace std;

int main()
{
    int buf[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> buf[i][j];
        }
    }
    int r1, r2; cin >> r1 >> r2;
    for (int i = 0; i < 5; i++){
        int t = buf[r1-1][i];
        buf[r1-1][i] = buf[r2-1][i];
        buf[r2-1][i] = t;
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << buf[i][j] << " "; 
        }
        cout << endl;
    }
}