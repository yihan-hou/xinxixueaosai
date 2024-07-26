#include <iostream>
#include <vector>
using namespace std;

bool gcd(int a, int b){
    if (b == 0){
        if (a == 1) return 1;
        else return 0;
    }
    return gcd(b, a%b);
}

bool yn_get(vector<int> n, int k){
    for (int i:n){
        if (gcd(i, k) == false) return false;
    }
    return true;
}

void get(vector<int>& n, int k){
    n.push_back(k);
}

void set(vector<int>& n){
    vector<int> n1 = {};
    for (int i = 0; i < n.size()-1; i++){
        n1.push_back(n[i]);
    }
    n = n1;
}

int max1(vector<int> buf){
    int m = buf[0];
    for (int i = 1; i < buf.size(); i++){
        if (buf[i]>m) m = buf[i];
    }
    return m;
}

vector<int> split(vector<int> buf){
    vector<int> buf1;
    for (int i = 1; i < buf.size(); i++){
        buf1.push_back(buf[i]);
    }
    return buf1;
}

int f(vector<int> buf, vector<vector<int>> num){
    if (buf.size() == 0) return num.size();
    int res = buf.size() + num.size();
    int t = buf.back();
    buf.pop_back();
    vector<int> n = {};
    get(n, t);
    num.push_back(n);
    res = min(f(buf, num), res);
    num.pop_back();
    for (vector<int>& n:num){
        if (yn_get(n, t)){
            get(n, t);
            res = min(f(buf, num), res);
            set(n);
        }
        buf[0] = t;
    }
    return res;
}

int main(){
    int n; cin >> n;
    vector<int> buf;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        buf.push_back(a);
    }
    cout << f(buf, {}) << endl;
    return 0;
}