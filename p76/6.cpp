#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int L, R; cin >> L >> R;
    int a = 0;
    for (int i = L; i <= R; i++){
        string c = to_string(i);
        for (auto j:c){
            if (j == '2'){
                a++;
            }
        }
    }
    cout << a << endl;
}