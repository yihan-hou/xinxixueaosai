#include <iostream>
using namespace std;

int main(){
    string c; cin >> c;
    string cyyzf = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890_";
    for (int i = 0; i < c.size(); i++){
        auto k = cyyzf.find_first_of(c[i]);
        if (k == cyyzf.npos || (c[0] >= '0' && c[0] <= '9')){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}