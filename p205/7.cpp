#include <iostream>
#include <vector>
#include "sort.hpp"
#include <iomanip>
using namespace std;
using namespace sort;

struct Chlid{
    string sex;
    double high;
    bool operator < (Chlid a){
        if (high < a.high) return true;
        return false;
    }
};

int main(){
    int n; cin >> n;
    vector<Chlid> male;
    vector<Chlid> female;
    for (int i = 0; i < n; i++){
        Chlid c; cin >> c.sex >> c.high;
        if (c.sex == "male") male.push_back(c);
        else female.push_back(c);
    }
    merge(male.begin(), male.end());
    merge(female.rbegin(), female.rend());
    for (Chlid i:male) cout << fixed << setprecision(2) << i.high << ' ';
    for (Chlid i:female) cout << i.high << ' ';
    cout << endl;
    return 0;
}