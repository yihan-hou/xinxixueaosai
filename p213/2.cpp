#include <iostream>
#include <vector>
using namespace std;

int Pell(int an){
    int f0 = 1, f1 = 2, f2;
    if (an == 1 || an == 2) return an;
    for (int i = 3; i <= an; i++){
        f2 = (f0+2*f1)%32767;
        f0=f1;
        f1=f2;
    }
    return f2;
}

int main() {
    int n; cin >> n;
    vector<int> buf;
    for (int i = 0; i < n; i++){
        int m; cin >> m;
        m = Pell(m);
        buf.push_back(m);
    }
    for (int i = 0; i < buf.size(); i++) cout << buf[i] << endl;
    return 0;
}