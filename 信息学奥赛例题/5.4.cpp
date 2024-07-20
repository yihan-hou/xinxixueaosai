#include <iostream>
#include <vector>
using namespace std;

void f(vector<vector<char>>& buf, int i, int j){
    buf[i][j] = '*';
    for (int i1 = 0; i1 < 8; i1++){
        if (buf[i1][j] != '*') buf[i1][j] = '0';
    }
    for (int j1 = 0; j1 < 8; j1++){
        if (buf[i][j1] != '*') buf[i][j1] = '0';
    }
    int i1 = i;
    int j1 = j;
    while(i1-1 >= 0 && j1-1 >= 0){
        i1--;
        j1--;
        if (buf[i1][j1] != '*') buf[i1][j1] = '0';
    }
    i1 = i;
    j1 = j;
    while(i1+1 <= 7 && j1+1 <= 7){
        i1++;
        j1++;
        if (buf[i1][j1] != '*') buf[i1][j1] = '0';
    }
    i1 = i;
    j1 = j;
    while(i1-1 >= 0 && j1+1 <= 7){
        i1--;
        j1++;
        if (buf[i1][j1] != '*') buf[i1][j1] = '0';
    }
    i1 = i;
    j1 = j;
    while(i1+1 <= 7 && j1-1 >= 0){
        i1++;
        j1--;
        if (buf[i1][j1] != '*') buf[i1][j1] = '0';
    }
}

void eight_hh(vector<vector<char>>& buf, int t){
    if (t == 8){
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                if (buf[i][j] == '*'){
                    cout << '*';
                }
                else cout << '#';
            }
            cout << endl;
        }
        cout << "-----------------------" << endl;
        return ;
    }
    for (int j = 0; j < 8; j++){
        if (buf[t][j] == '#'){//
            auto buf1 = buf;
            f(buf, t, j);
            eight_hh(buf, t+1);
            buf = buf1;
        }
    }
}

int main(){
    vector<vector<char>> buf;
    for (int i = 0; i < 8; i++){
        vector<char> buf1;
        for (int j = 0; j < 8; j++){
            buf1.push_back('#');
        }
        buf.push_back(buf1);
    }
    eight_hh(buf, 0);
}