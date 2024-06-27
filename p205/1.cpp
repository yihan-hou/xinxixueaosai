#include <iostream>
#include <vector>
using namespace std;

struct Student{
    string xuehao;
    double score;
    bool operator < (Student a){
        if (this->score < a.score) return true;
        return false;
    }
};
Student find(vector<Student> sbuf, int k){
    vector<Student> buf0;
    vector<Student> buf1;
    for (auto x:sbuf){
        if (sbuf[0] < x) buf0.push_back(x);
        else if (x < sbuf[0]) buf1.push_back(x);
    }
    if (buf0.size() >= k) return find(buf0, k);
    else if (buf0.size() < k-1) return find(buf1, k-buf0.size()-1);
    else return sbuf[0];
}

int main(){
    int n, k; cin >> n >> k;
    vector<Student> sbuf;
    for (int i = 0; i < n; i++){
        Student s; cin >> s.xuehao >> s.score; sbuf.push_back(s);
    }
    Student people = find(sbuf, k);
    cout << people.xuehao << ' ' << people.score << endl;
}