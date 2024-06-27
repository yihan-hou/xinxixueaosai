#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double arctanx(double x){
    double p = 0;
    double cf = 0;
    while (true){
        double a = pow(-1, cf) * (pow(x, 2*cf+1) / (2*cf+1));
        if (abs(a) < 1e-6) return p;
        p += a;
        cf+=1;
    }
}

int main(){
    cout << fixed << setprecision(10) << 6*arctanx(1/sqrt(3)) << endl;
    return 0;
}