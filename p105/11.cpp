#include <iostream>
using namespace std;

int main(){
    int ymn; cin >> ymn;
    string buf[ymn];
    for (int i = 0; i < ymn; i++){
        cin >> buf[i];
    }

    for (int i = 0; i < ymn; i++){
        string& x = buf[i];
        for (int j = 0; j < x.size(); j++){
            if (x[j] >= 'a' && x[j] <= 'z' && j == 0) x[j] = x[j] - 'a' + 'A';
            else if (x[j] >= 'A' && x[j] <= 'Z' && j != 0) x[j] = x[j] - 'A' + 'a';
        }
        cout << x << endl;
    }
    return 0;
}