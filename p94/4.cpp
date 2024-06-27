#include <iostream>
using namespace std;

int main() {
    int r = 5;
    int c = 5;
    int buf[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            int d; cin >> d;
            buf[i][j] = d;
        }
    }
    int max[r]; int min[c];
    for (int i = 0; i < r; i++){
        int a = buf[i][0];
        for (int j = 0; j < c; j++){
            if (buf[i][j] > a) a = buf[i][j];
        }
        max[i] = a;
    }
    
    for (int j = 0; j < c; j++){
        int a = buf[0][j];
        for (int i = 0; i < c; ++i){
            if (buf[i][j] < a) a = buf[i][j];
        }
        min[j] = a;
    }
    bool t = false;
    for (int i = 0; i<r; i++){
        for (int j = 0; j < c; j++){
            if (max[i] == min[j]) {
                printf("%d %d %d", i+1, j+1, max[i]);
                t = true;
            }
        }
    }
    if(!t) printf("not found");
    return 0;
}