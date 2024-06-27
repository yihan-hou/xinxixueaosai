#include <iostream>
#include "sort.hpp"
#include <vector>
using namespace std;
using namespace sort;

struct Student{
    int chinese;
    int maths;
    int english;
    int i;
    bool operator < (Student a){
        int th_cme = chinese+maths+english;
        int a_cme = a.chinese+a.maths+a.english;
        if (a_cme < th_cme) return true;
        else if (a_cme > th_cme) return false;
        else{
            if (a.chinese < chinese) return true;
            else if (a.chinese > chinese) return false;
            else{
                if (a.i < i) return true;
                else return false;
                /*if (a.maths < maths) return true;
                else if (a.maths > maths) return false;
                else{
                    if (a.english < english) return true;
                    else if (a.english > english) return false;
                    else{
                        
                    }
                }*/
            }
        }
    }
};

int main(){
    int n; cin >> n;
    vector<Student> buf;
    for (int i = 0; i < n; i++){
        Student m; cin >> m.chinese >> m.maths >> m.english;
        m.i = i;
        buf.push_back(m);
    }
    select(buf.begin(), buf.end());
    for (int i = 0; i < 5; i++) {
        if (i < buf.size()) cout << buf[i].i << ' ' << buf[i].chinese + buf[i].maths + buf[i].english << endl;
    }
    return 0;
}
