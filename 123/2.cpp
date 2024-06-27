#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; cin >> n;
    double y = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        y += (a+69)/70/10.0;
    }
    cout << fixed << setprecision(1) << y << endl;
    return 0;
}