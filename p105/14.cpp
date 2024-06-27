#include <iostream>
using namespace std;

int main(){
    string s;
    char buf[300];
    cin.getline(buf, sizeof(buf));
    s = buf;
    s += ' ';
    int n = 0;
    int k = 0;
    bool j = false;
    for (char i:s){
        k++;
        if (i == ' '){
            if (n != 0) {
                if (j) cout << ',';
                cout << n;
                j = true;
            }
            n = 0;
        }
        else n++;
    }
    return 0;
}