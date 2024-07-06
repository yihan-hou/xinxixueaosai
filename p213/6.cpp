#include <iostream>
#include <map>
using namespace std;

map<int, int> memo;

int f(int n){
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (memo.count(n) != 0) return memo[n];
    else {
        memo[n] = f(n-1) + f(n-2);
        return memo[n];
    }
}

int main(){
    int n; cin >> n;
    cout << f(n) << endl;
}