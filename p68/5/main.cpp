#include <iostream>
using namespace std;
/*
int main() {
	int n; cin >> n;
	int s = 1;
	if (n<0) {
		cout << "-";
		n = -n;
	}
	do{
		int x = n%10;
		if (x == 0 && s == 1 && n != 0) {
			cout << ""; 
		}
		else {
			cout << x;
			s++;
		}
		n /= 10;
	}while(n!=0);
	
	return 0;
}
*/
int main() {
	int n; cin >> n;
	int m = 0;
	do {
		m *= 10;
		m += n % 10;
		n /= 10;
	} while (n);
	cout << m << endl;
	return 0;
}
