#include <iostream>
using namespace std;

int main() {
	int m, k; cin >> m >> k;
	int n = m;
	int s = 0;
	do{
		int x = m%10;
		if (x == 3) s++;
		m /= 10;
	}while(m);
	if (n % 19 == 0 && s == k) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
