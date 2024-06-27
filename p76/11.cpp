#include <iostream>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    int n = 0;
    for (int x = c; x >= 0; x--){
        int y = (c-a*x);
        if (y >= 0 && y%b == 0) n++;
    }
    cout << n << endl;
    return 0;
}