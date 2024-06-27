#include <iostream>
#include <list>
#include <vector>
using namespace std;

struct ill_people{
    string hao;
    int age;
};

bool operator < (ill_people a, ill_people b) {
    if (a.age < b.age){
        return true;
    }
    return false;
}

void paixu(vector<ill_people>& t){
    for (int i = 0; i < (int)t.size()-1; i++){
        for (int j = 0; j < (int)t.size()-i-1; j++){
            if (t[j] < t[j+1]){
                auto a = t[j];
                t[j] = t[j+1];
                t[j+1] = a;
            }
        }
    }
}

int main(){
    int n; cin >> n;
    list<ill_people> s;
    vector<ill_people> t;
    for (int i = 0; i < n; i++){
        ill_people a;
        cin >> a.hao >> a.age;
        if(a.age>=60) t.push_back(a);
        else s.push_back(a);
    }

    paixu(t);
    for (auto a:t) cout << a.hao << endl;
    for (auto a:s) cout << a.hao << endl;
}