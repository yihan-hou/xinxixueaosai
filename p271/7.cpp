#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int g(vector<int> buf){
    int n = 0;
    for (int i = 1; i < buf.size(); i++) n+=buf[i];
    return n;
}

double f(vector<int> buf){
    sort(buf.rbegin(), buf.rend());
    int a = buf[0];
    int b = g(buf);
    if (a>=b){
        return b;
    }
    else{
        return double(a+b)/2;
    }
}

int main(){
    int n; cin >> n;
    vector<int> buf;
    for (int i = 0; i < n; i++){
        int b; cin >> b;
        buf.push_back(b);
    }
    cout << fixed << setprecision(1) << f(buf) << endl;
    return 0;
}