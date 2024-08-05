#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Metal{
    int n; //重量
    int v; //价值
    bool operator < (Metal a){
        if (v/n > a.v/a.n) return true;
        else return false;
    }
};

double f(int k, vector<Metal> buf1){
    sort(buf1.begin(), buf1.end());
    double a = 0;
    for (int m = 0; m < buf1.size(); m++){
        if (k != 0){
            if (buf1[m].n < k){
                a += buf1[m].v;
                k -= buf1[m].n;
            }
            else{
                a += double(k)/buf1[m].n*buf1[m].v;
                k = 0;
            }
        }
    }
    return a;
}

int main(){
    int k; cin >> k;
    vector<double> buf;
    for (int i = 0; i < k; i++){
        int k; cin >> k;
        int s; cin >> s;
        vector<Metal> buf1;
        for (int j = 0; j < s; j++){
            Metal a; cin >> a.n >> a.v;
            buf1.push_back(a);
        }
        buf.push_back(f(k, buf1));
    }
    for (double i:buf){
        cout << fixed << setprecision(2) << i << endl;
    }
    return 0;
}