#include <iostream>
#include <cstring>
using namespace std;

bool sushu(int n){
    for (int i = 2; i < n; i++){
        if (n%i == 0) return false;
    }
    return true;
}

int jiaohuan(int n){
    int w = 0;
    while(n){
        int m = n % 10;
        w = w*10+m;
        n /= 10;
    }
    return w;
}

int main(){
    for (int n = 10; n < 100; n++){
        int m = jiaohuan(n);
        if (sushu(n) && sushu(m)) cout << n << endl;
    }
}