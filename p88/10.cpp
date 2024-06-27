#include <iostream>
using namespace std;

int main(){
    int happy_count = 0;
    int not_h_day = 0;
    int not_h_hour = 8;
    for (int i = 0; i < 7; i++){
        int c, o; cin >> c >> o;
        if (c + o > not_h_hour){ 
            not_h_day = i+1;
            not_h_hour = c + o;
        }
    }
    cout << not_h_day << endl;
    return 0;
}