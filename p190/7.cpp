#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> f(string mul){
    vector<int> buf;
    for (int i = mul.size()-1; i >= 0; i--){
        buf.push_back(mul[i]-'0');
    }
    return buf;
}

void jinwei(vector<int>& buf){
    int k = 0;
    for (int i = 1; i < buf.size(); i++){
        buf[i] += buf[i-1]/10;
        k = buf[i-1]/10;
        buf[i-1] %= 10;
    }
    while (buf[buf.size()-1] >= 10){
        buf.push_back(buf[buf.size()-1] / 10);
        buf[buf.size()-2] %= 10;
    }
}

void add(vector<int>& f, vector<int> buf){
    for (int i = f.size(); i < buf.size(); i++) f.push_back(0);
    for (int i = 0; i < buf.size(); i++){
        f[i] += buf[i];
    }
}

vector<int> mul(vector<int> buf1, vector<int> buf2){
    vector<int> f(buf1.size() + buf2.size(), 0);
    for (int i = 0; i < buf2.size(); i++){
        for (int j = 0; j < buf1.size(); j++){
            f[i+j] += buf2[i] * buf1[j];
        }
    }
    jinwei(f);
    return f;
}

void print(vector<int> f){
    for (int i = f.size()-1; i >= 0; i--){
        if (f[i] != 0){
            for (int j = i; j >= 0; j--) {
                cout << f[j];
            }
            return ;
        }
    }
}

int main(){
    string mul1, mul2;
    cin >> mul1 >> mul2;
    vector<int> buf1 = f(mul1);
    vector<int> buf2 = f(mul2);
    vector<int> f = mul(buf1, buf2);
    print(f);
    return 0;
}