#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	do{
		int x = n%10;
		cout << x;
		n /= 10;
		
	}while(n!=0);
	
	return 0;
}
