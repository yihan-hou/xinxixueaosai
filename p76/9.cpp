#include <iostream>
using namespace std;

bool prime(int a){
    int b = 0;
    for (int i = 2; i < a; i++){
        if (a%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n; cin >> n;
    int p = 0;
    int a = 2;
    while (true){
        if (prime(a)){
            p++;
        }
        if (p == n) {
            cout << a << endl;
            break;
        }
        a++;
    }

    return 0;
}