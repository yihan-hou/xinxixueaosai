#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++){
        int a = 0;
        for (int j = 1; j <= i; j++){
            if (i%j == 0){
                if (a == 1) a = 0;
                else a = 1;
            }
        }
        if (a == 1) cout << i << " ";
    }
    return 0;
}