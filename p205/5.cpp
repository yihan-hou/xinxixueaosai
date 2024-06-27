#include <iostream>
#include "sort.hpp"
#include <vector>
using namespace std;
using namespace sort;

struct Student{
    int hao; 
    int score;
    bool operator < (Student a){
        if (score > a.score) return true;
        else if (a.score > score) return false;
        else{
            if (hao < a.hao) return true;
            else return false;
        }
    }
};

/*Student find(vector<Student> sbuf, int k){
    vector<Student> buf0;
    vector<Student> buf1;
    for (auto x:sbuf){
        if (sbuf[0] < x) buf0.push_back(x);
        else if (x < sbuf[0]) buf1.push_back(x);
    }
    if (buf0.size() >= k) return find(buf0, k);
    else if (buf0.size() < k-1) return find(buf1, k-buf0.size()-1);
    else return sbuf[0];
}*/

int main(){
    double n, m; cin >> n >> m;
    vector<Student> buf;
    for (int i = 0; i < n; i++){
        Student a; cin >> a.hao >> a.score;
        buf.push_back(a);
    }
    select(buf.begin(), buf.end());
    int s = buf[int(m*1.5)-1].score;
    int p = 0;
    for (Student i:buf){
        if (i.score >= s) p++;
    }
    cout << s << ' ' << p << endl;
    for (Student i:buf){
        if (i.score >= s) cout << i.hao << ' ' << i.score << endl;
    }
    return 0;
}