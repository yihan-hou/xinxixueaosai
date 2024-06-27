#include <iostream>
#include <iomanip>
using namespace std;

double jiecheng(int i) {
    if (i == 0) return 1;
    return i*jiecheng(i - 1);
}

double oulashu(int n) {
    double e = 0;
    for (int i = 0; i < n + 1; i++) {
        e += 1 / jiecheng(i);
    }
    return e;
}

int main()
{
    int n = 100;
    cout << setprecision(11) << oulashu(n) << endl;
}
