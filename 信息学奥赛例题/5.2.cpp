#include <iostream>
#include <vector>
using namespace std;

void search(vector<int>, vector<int>, int&, int);

int main(){
    int n, r; cin >> n >> r;
    vector<int> buf;
    vector<int> a;
    for (int i = 0; i < r; i++) a.push_back(0);
    int t = 0;
    for (int i = 1; i <= n; i++){
        buf.push_back(i);
    }
    search(buf, a, t, 0);
}

void search(vector<int> buf, vector<int> a, int& t, int j){
    if (j == a.size()){
        t++;
        cout << t << endl;
        for (int i = 0; i < a.size(); i++) cout << a[i] << ' ';
        cout << endl; 
    }
    for (int i = 0; i < buf.size(); i++){
        if (buf[i] != 0){
            a[j] = buf[i];
            buf[i] = 0;
            search(buf, a, t, j+1);
            buf[i] = a[j];
        }
    }
}