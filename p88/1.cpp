#include <iostream>
using namespace std;

int main()
{
    int N, m; cin >> N >> m;
    int b = 0;
    for (int i = 0; i < N; i++){
        int a; cin >> a;
        if (a == m) b++;
    }
    cout << b << endl;
}