#include <iostream>
using namespace std;

int main()
{
    int m; cin >> m;
    int buf[m];
    for (int i = 0; i < m; i++){
        int a; cin >> a;
        buf[i] = a;
    }
    int min = buf[0];
    int max = buf[0];
    for (int i = 0; i < m; i++){
        if (max < buf[i]) max = buf[i];
        else if (min > buf[i]) min = buf[i];
    }
    cout << max - min << endl;
}