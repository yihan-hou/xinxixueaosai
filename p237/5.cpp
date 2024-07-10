#include <iostream>
#include <vector>
#include <map>
using namespace std;


int64_t f(int a){
    int s1 = 2;
    int s2 = 1;
    int s = 0;
    if (a == 1 || a == 2) return a;
    for (int i = 3; i <= a; i++){
        s = (2*s1+s2)%32767;
        s2 = s1;
        s1 = s;
    }
    return s;
}

int main(){
    int n; cin >> n;
    vector<int64_t> buf;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        buf.push_back(f(a));
    }
    for (int64_t i:buf) cout << i << endl;
    return 0;
}