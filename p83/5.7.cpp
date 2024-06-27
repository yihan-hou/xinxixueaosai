#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
const int a = 100;
bool prime[a+1];

int main()
{
    int n; cin >> n;
    for (int i = 0; i<n; i++){
        prime[i] = true;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (prime[i]){
            for (int j = 2; j <= n/i; j++) prime[i*j] = false;
        }

    }
    for (int i = 2, t = 0; i <= n; i++){
        if (prime[i]){
            cout << setw(5) << i;
            t++;
            if (t%5==0) cout << endl;
        } 
    }
    cout << endl;
    return 0;
}