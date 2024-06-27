#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double x, int n){
    if (n == 0)return x;
    return sqrt(n+f(x, n-1));
}

int main(){
    double x; cin >> x;
    int n; cin >> n;
    cout << fixed << setprecision(2) << f(x, n) << endl;
}