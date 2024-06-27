#include <iostream>
#include <cstring>
using namespace std;

char* daoxu(char* p){
    for (int i = 0; i < strlen(p)/2; i++){
        char t = p[i];
        p[i] = p[strlen(p)-1-i];
        p[strlen(p)-1-i] = t;
    }
    return p;
}

int main(){
    char* p = new char [1000];
    cin >> p;
    cout << daoxu(p) << endl;
}