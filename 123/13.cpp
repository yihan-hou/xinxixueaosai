#include <iostream>
#include <string.h>
using namespace std;

void bin(int i, int* a, int* c){
    int b = 0;
    int d = 0;
    while (true){
        if (i == 0) break;
        int x = i%2;
        if (x == 1) b++;
        else ++d;
        i /= 2;
    }
    if (b>d) ++*a;
    else ++*c;
}

int main(){
    int a = 0;
    int b = 0;
    for (int i = 1; i < 1001; i++) bin(i, &a, &b);
    cout << a << ' ' << b << endl;
}