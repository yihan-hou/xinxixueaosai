#include <iostream>
#include <list>
using namespace std;

//list<int> xx;
//xx.push_back(2);
//xx.pop_front();
//xx.size();

bool ynin(list<int> dict, int a){
    for (int i:dict){
        if (a == i) return false;
    }
    return true;
}

int main(){
    int m, n; cin >> m >> n;
    list<int> dict;
    int p = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (ynin(dict, a)){
            if (dict.size() == m) dict.pop_front();
            dict.push_back(a);
            p++;
        }
    }
    cout << p << endl;
    return 0;
}