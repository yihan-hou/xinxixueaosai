#include <iostream>
using namespace std;

int main()
{
	int h; cin>>h;
	while(h != 1){
		if (h%2==0){
			h /= 2;
		}
		
		else h = h*3+1;
		cout << h << endl;
	}
	cout << "End" << endl; 
	return 0;
}
