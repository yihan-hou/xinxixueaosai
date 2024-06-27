#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int max = 0;
    int a = 1;
    int n1 = 0;
    int r = 0;
    int x = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (x == a) n1++;
        else n1 = 1;
        x = a;
        if (n1 > r) r = n1;
    }
    cout << r << endl;
    return 0;
}