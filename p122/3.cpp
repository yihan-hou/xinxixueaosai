#include <iostream>
#include <iomanip>
using namespace std;

double max(double a, double b, double c){
    double m = a;
    if (b >= m) m = b;
    if (c >= m) m = c;
    return m;
}

int main(){
    double a, b, c; cin >> a >> b >> c;
    double buf[3] = {a, b, c};
    double x = max(a, b, c) / (max(a+b, b, c) * max(a, b, b+c));
    cout << fixed << setprecision(3) << x << endl;
}