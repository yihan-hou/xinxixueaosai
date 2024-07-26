#include <iostream>
#include <vector>
using namespace std;

int set_applenumber(int k, int m, int n){
    if (n == 0) return m == 0;
    int p = 0;
    for (int i = 0; i <= min(k, m); i++){
        p += set_applenumber(i, m-i, n-1);
    }
    return p;
}

int main(){
    int a; cin >> a;
    vector<int> buf;
    for (int i = 0; i < a; i++){
        int m, n; cin >> m >> n;
        buf.push_back(set_applenumber(m, m, n));
    }
    for (int i:buf) cout << i << endl;
    return 0;
}