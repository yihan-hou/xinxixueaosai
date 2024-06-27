#include <iostream>
#include <string>
using namespace std;

bool notseven(int i) {
	string s = to_string(i);
	for (auto c : s) {
		if (c == '7') return false;
	}
	return true;
}

int main()
{
	int n; cin >> n;
	int a = 0;
	for (int i = 0; i < n + 1; i++) {
		if (i % 7 != 0 && notseven(i)) {
			a += i * i;
		}
		//else cout << i << " ";
	}
	cout << a;
}
