#include <iostream>
using namespace std;

int main()
{
    int can = 0;
    int buf[10];
    for (int i = 0; i < 10; i++){
        int ca; cin >> ca;
        buf[i] = ca;
    }
    int n; cin >> n;
    for (int i = 0; i < 10; i++){
        if(buf[i] <= n+30) can++;
    }
    cout << can << endl;
    return 0;
}