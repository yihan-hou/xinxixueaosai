#include <iostream>
using namespace std;

void f(int n, char a, char c, char b) {
    if (n == 0) return;
    f(n-1, a, b, c);
    cout << a << "->" << c << endl;
    f(n-1, b, c, a);
}

int main(){
    int n; cin >> n;
    f(n, 'a', 'c', 'b');
    return 0;
}