#include <iostream>
using namespace std;

int main()
{
    int n, i, j; cin >> n >> i >> j;

    for (int a = 1; a <= n; a++) printf("(%d,%d) ", i, a);
    cout << endl;

    for (int a = 1; a <= n; a++) printf("(%d,%d) ", a, j);
    cout << endl;

    for (int k = -min(i, j) + 1; max(i + k, j + k) <= n; ++k) {
        printf("(%d,%d) ", i + k, j + k);
    }

    cout << endl;

    for (int k = max(i-n, 1-j); k <= min(i-1, n-j); ++k) {
        printf("(%d,%d) ", i - k, j + k);
    }
    cout << endl;
    return 0;
}