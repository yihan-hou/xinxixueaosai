#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int buf[n];
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        buf[i] = num;
    }
    for (int i = n-1; i >= 0; i--) cout << buf[i] << " ";
}