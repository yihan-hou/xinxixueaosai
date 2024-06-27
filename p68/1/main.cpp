#include <iostream>
using namespace std;

int main() 
{
	double h;
	cin >> h;
	int s;
	for(int k = 0; k < 10; ++k) {
		s += h;
		h = h / 2;
		s += h;
	}
	s -= h;
	cout << s << endl;
	cout << h << endl;
	return 0;
}
