#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int min_cow_num(int b, vector<int> buf){
    sort(buf.rbegin(), buf.rend());
    int cow_num = 0;
    int cow_hi = 0;
    for (int i:buf){
        cow_num++;
        cow_hi += i;
        if (cow_hi >= b) break;
    }
    return cow_num;
}

int main(){
    int n, b; cin >> n >> b;
    vector<int> buf;
    for (int i = 0; i < n; i++){
        int hi; cin >> hi;
        buf.push_back(hi);
    }
    cout << min_cow_num(b, buf) << endl;
    return 0;
}