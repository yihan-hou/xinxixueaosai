#include <iostream>
using namespace std;

int main(){
    string c; cin >> c;
    int n = c.size();
    //string buf[n];
    string english = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < n; i++){
        int p = c[i];
        int q;
        if (i == n-1) q = c[0];
        else q = c[i+1];
        cout << char(p+q);
    }
    return 0;
}