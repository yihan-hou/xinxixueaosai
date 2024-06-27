#include <iostream>
using namespace std;


int main()
{
	int a; 
	int b;
	char c;
	int d;
	cin >> a >> b >> c >> d;
	if (d == 1) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << c;
			}
			cout << endl;
		}
	}

	else {
		for (int i = 0; i < a; i++) {
			if (i == 0 || i == a-1) {
				for (int j = 0; j < b; j++) {
					cout << c;
				}
			}
			else {
				cout << c;
				for (int k = 0; k < b - 2; k++) {
					cout << " ";
				}
				cout << c;
			}
			cout << endl;
		}
	}
}
