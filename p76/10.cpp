#include <iostream>
using namespace std;
//1+2+3+...
int main()
{
    int day; cin >> day;
    int n = 1;
    int a = 0;
    int b = 0;
    while (day >= n){
        day -= n;
        a += n * n;
        ++n;
    }
    cout << a + day * n << endl;
}