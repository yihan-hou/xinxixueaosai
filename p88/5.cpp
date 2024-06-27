#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    int n; cin >> n;
    double a = 0; double b = 0; double c = 0; double d = 0;
    int buf[n];
    for (int i = 0; i < n; i++){
        int c; cin >> c;
        buf[i] = c;
    }
    for (int i = 0; i < n; i++){
        if (buf[i] >= 0 && buf[i] <= 18) a++;
        else if (buf[i] >= 19 && buf[i] <= 35) b++;
        else if (buf[i] >= 36 && buf[i] <= 60) c++;
        else d++;
    }
    
    cout << setiosflags(ios_base::fixed) << setprecision(2) << a/n*100 << "%" << endl;
    cout << b/n*100 << "%" << endl;
    cout << c/n*100 << "%" << endl;
    cout << d/n*100 << "%" << endl;
}
