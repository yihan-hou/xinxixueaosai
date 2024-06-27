#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n; cin >> n;

    double buf[n];
    for (int i = 0; i < n; i++){
        double a; cin >> a;
        buf[i] = a;
    }

    double a = buf[0];
    double b = buf[0];
    
    for (int i = 0; i < n; i++){
        if (buf[i] > a) a = buf[i];
        else if (buf[i] < b) b = buf[i];  
    }
    double f = a;
    double g = b;
    double p = 0;
    for (int i = 0; i < n; i++){

        if (buf[i] == a) {
            a = 100000000;
            continue;
        }
        else if (buf[i] == b) {
            b = 1000000000;
            continue;
        }
        p += buf[i];
    }

    double c = p / (n-2);
    double d = 0;
    for (int i = 0; i < n; i++){
        if (buf[i] == f){
            f = 1000000;
            continue;
        }
        else if (buf[i] == g) {
            g = 1000000;
            continue;
        }
        if (d < abs(buf[i]-c)) d = abs(buf[i]-c);
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << c << " " << d << endl;
    return 0;
}