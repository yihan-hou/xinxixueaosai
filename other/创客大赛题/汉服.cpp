#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> buf;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        buf.push_back(a);
    }
    cout << "--------------" << endl;
    sort(buf.begin(), buf.end());
    int a = 0;
    for (int i = 0; i < n-1; i++){
        if (buf[i+1]-buf[i] <= m){
            a++;
            i += 1;
        }
    }
    cout << a << endl;
    return 0;
}