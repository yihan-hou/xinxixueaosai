#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int buf0[n];
    string buf1[n];
    for (int i = 0; i < n; i++){
        cin >> buf0[i];
        cin >> buf1[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++){
        if (buf0[i] >= buf0[max]) max = i;
    }

    cout << buf1[max] << endl;
    return 0;
}