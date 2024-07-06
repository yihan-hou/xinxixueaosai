#include <iostream>
using namespace std;

int s(int n, int k){
    if (n < k || k == 0) return 0;
    if (k == 1 || k == n) return 1;
    return s(n-1, k-1) + k * s(n-1, k);
}

int main(){
    int n, k; cin >> n >> k;
    cout << s(n, k) << endl;
    return 0;
}