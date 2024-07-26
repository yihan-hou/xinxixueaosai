#include <iostream>
#include <vector>
using namespace std;

bool get_stone(int a, int b){
    if (a%b == 0 || b%a == 0) return true;
    int c = max(a, b);
    int d = min(a, b);
    for (int i = 1; i <= c/d; i++){
        if (!get_stone(d, c-d*i)) return true;
    }
    return false;
}

int main(){
    vector<bool> buf;
    while (true){
        int a, b; cin >> a >> b;
        if (a == 0 && b == 0) break;
        buf.push_back(get_stone(a, b));
    }
    for (bool t:buf){
        if (t == true) cout << "win" << endl;
        else cout << "lose" << endl;
    }
    return 0;
}