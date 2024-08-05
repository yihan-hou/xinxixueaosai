#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Time{
    int begini;
    int endi;
    bool operator < (Time a){
        if (endi < a.endi) return true;
        return false;
    }
};

int a(vector<Time> time_buf){
    sort(time_buf.begin(), time_buf.end());
    int t = 1;
    int j = 0;
    for (int i = 1; i < time_buf.size(); i++){
        if (time_buf[i].begini >= time_buf[j].endi){
            t++;
            j = i;
        }
    }
    return t;
} 

int main(){
    int n; cin >> n;
    vector<Time> time_buf;
    for (int i = 0; i < n; i++){
        Time t; cin >> t.begini >> t.endi;
        time_buf.push_back(t);
    }
    cout << a(time_buf) << endl;
}