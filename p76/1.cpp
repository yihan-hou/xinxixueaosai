#include <iostream>
using namespace std;

int ddjc(int i) {
    int b = 1;
    for (int j = 1; j <= i; j++) {
        b *= j;
    }
    return b;
}

int jczh(int n) {
    int a = 0;
    for (int i = 1; i <= n; i++) {
        a += ddjc(i);
    }
    return a;
}

int main()
{
    int n; cin >> n;
    cout << jczh(n) << endl;
}
