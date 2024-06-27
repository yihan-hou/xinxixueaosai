#include <iostream>
using namespace std;

int main()
{
    char* buf = new char[100001];
    string str; cin.getline(buf, 100001);
    str = buf;
    int counts[256] = {0};
    for (char i:str){
        ++counts[i];
    }
    for (char i:str){
        if (counts[i] == 1){
            cout << i << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}