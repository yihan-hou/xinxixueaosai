#include <iostream>
using namespace std;

int main()
{
    float buf[10] = {28.9, 32.7, 45.6, 78.0, 35.0, 86.2, 27.8, 43.0, 56.0, 65.0};
    int buf1[10];
    float money = 0;
    for (int i = 0; i < 10; i++){
        int co; cin >> co;
        buf1[i] = co;
    }
    for (int i = 0; i < 10; i++){
        money += buf1[i]*buf[i];
    }
    cout << money << endl;
    return 0;
}