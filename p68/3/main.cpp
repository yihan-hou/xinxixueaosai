#include <iostream>
using namespace std;

int main() 
{
	int k; cin >> k;
	double s = 0;
	double n = 1;
	while (true){
		s += 1/n;
		if (s > k){
			cout << n << endl;
			break;
		}
		
		else n+=1;
	}
	
	return 0;
}
