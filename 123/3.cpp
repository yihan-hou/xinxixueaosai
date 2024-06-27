#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    string names[n];
    double wd[n];
    int yncough[n];
    int jlbrc = 0;

    for (int i = 0; i < n; i++){
        cin >> names[i] >> wd[i] >> yncough[i];
    }

    for (int i = 0; i < n; i++){
        if (wd[i] >= 37.5 && yncough[i] == 1){
            cout << names[i] << endl;
            jlbrc++;
        }
    }
    cout << jlbrc << endl;
    return 0;
}