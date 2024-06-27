#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    int a = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        for (auto j:s) {
            if (j == '1')a++;
        }
    }
    cout << a;
}
