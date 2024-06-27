#include <iostream>
using namespace std;

int main()
{
    char* buf = new char[256];
    string str; cin.getline(buf, 256);
    str = buf;
    int num = 0;
    for (char i:str){
        num += i >= '0' && i <= '9';
    }
    cout << num << endl;
}