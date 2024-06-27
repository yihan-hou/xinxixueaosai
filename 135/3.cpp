#include <iostream>
#include <iomanip>
using namespace std;

double h(double n, int x){
    if (n == 0) return 1;
    else if (n == 1) return 2*x;
    else{
        return 2*x*h(n-1, x) - 2*(n-1)*h(n-2, x);
    }
}

int main(){
    double n; cin >> n; int x; cin >> x;
    cout << fixed << setprecision(2) << h(n, x) << endl;
    return 0;
}