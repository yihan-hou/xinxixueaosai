#include <iostream>
using namespace std;

int main()
{
    int L; cin >> L;
    int M; cin >> M;
    bool* buf = new bool [L+1];
    int a = 0;

    for (int i = 0; i <= L; i++){
        buf[i] = true;
    }

    for (int i = 0; i < M; i++){
        int a, b; cin >> a >> b;
        for (int j = a; j <= b; j++){
            buf[j] = false;
        }
    }
    for (int i = 0; i <= L; i++){
        if (buf[i] == true) a++;
    }
    cout << a << endl;
}