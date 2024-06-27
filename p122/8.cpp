#include <iostream>
using namespace std;

bool ynss(int n){
    for (int i = 2; i < n; i++){
        if (n%i == 0)return false;
    }
    if (n == 2) return false;
    return true;
}

int main(){
    for (int i = 6; i <= 100; i+=2){
        for (int j = 3; j < i; j+=2){
            int k = i-j;
            if (ynss(j) && ynss(k)) {
                printf("%d=%d+%d\n", i, j, k);
                break;
            }
        }
    }
}