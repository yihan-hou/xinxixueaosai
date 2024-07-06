#include <iostream>
#include <vector>
using namespace std;

int h(int a, int m, int n){
    if (n == 0) return 0;
    if (a > m) return 0;
    if (n == 1) return 1;
    int p = 0;
    for (int i = a; i <= m; i++){
        p += h(i, m-i, n-1);
    }
    return p;
}

int g(int m, int n1){
    int b = 0;
    if (n1 == 1) return 1;
    for (int m1 = 1; m1 <= m; m1++){
        b += h(m1, m-m1, n1-1);
    }
    return b;
}

int f(int m, int n){
    if (m == 1 || n == 1) return 1;
    int a = 0;
    for (int n1 = 1; n1 <= min(m, n); n1++){
        a += g(m, n1);
    }
    return a;
}

int main(){
    int a; cin >> a;
    vector<int> buf;
    for (int i = 0; i < a; i++){
        int m, n; cin >> m >> n;
        buf.push_back(f(m, n));
    }
    for (int i = 0; i < buf.size(); i++){
        cout << buf[i] << endl;
    }
    return 0;
}