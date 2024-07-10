#include <iostream>
#include <vector>
using namespace std;

bool ss(int n){
    for (int i = 2; i < n; i++){
        if (n%i == 0) return false;
    }
    return true;
}

int f(int n, int m){
    if (m > n) return 0;
    if (n == 1 || ss(n)) return 1;
    int o = 1;
    for (int i = m; i <= n; i++){
        if (n%i == 0) {
            if (n/i > i) o += f(n/i, m);
        }
    }
    return o;
}

int main(){
    /*cout << f(15, 16);//0
    cout << f(18, 16);//1
    cout << f(12, 12);//1*/
    int num; cin >> num;
    vector<int> buf;
    for (int i = 0; i < num; i++){
        int n; cin >> n;
        buf.push_back(f(n, 2));
    }
    for (int i:buf){
        cout << i << endl;
    }
}