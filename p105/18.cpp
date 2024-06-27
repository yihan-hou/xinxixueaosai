#include <iostream>
using namespace std;

int main(){
    string str; cin >> str;
    int n = str.size()/2;
    for (int i = 0; i <= n; i++){
        if (str[i] != str[str.size()-1-i]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}