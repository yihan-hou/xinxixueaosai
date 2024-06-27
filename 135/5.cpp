#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double x, double n){
    if (n == 0)return x;
    return n-1+x/f(x, n-1);
}

int main(){
    double x, n; cin >> x >> n;
    cout << fixed << setprecision(2) << x/f(x, n+1) << endl;
}