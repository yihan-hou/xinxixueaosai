#include <iostream>
#include "sort.hpp"
using namespace std;
using namespace sort;

struct Student{
    string name;
    int score;
    bool operator < (Student a){
        if (a.score < score) return true;
        else if (a.score == score && a.name > name) return true;
        return false; 
    }
};

int main(){
    int n; cin >> n;
    vector<Student> buf;
    for (int i = 0; i < n; i++){
        Student s; cin >> s.name >> s.score;
        buf.push_back(s);
    }
    bubble(buf.begin(), buf.end());
    for (auto s : buf){
        cout << s.name << ' ' << s.score << endl;
    }
}