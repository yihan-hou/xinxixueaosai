#include <iostream>
using namespace std;

bool ynss(int i){
    for (int j = 2; j < i; j++){
        if (i%j == 0) return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    int max = 2*(n-2);
    for (int i = 2; i < n-1; i++){
        if (ynss(i) && ynss(n-i) && i*(n-i) > max) max = i*(n-i);
    }

    cout << max << endl;
    return 0;
}