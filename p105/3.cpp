#include <iostream>
using namespace std;

int main()
{
    double x; cin >> x;
    string c1, c2; cin >> c1 >> c2;
    double n = 0;
    for(int k = 0; k < c1.size(); ++k)
    {
        if (c1[k] == c2[k]) n++;
    }
    if (n / double(c1.size()) >= x) printf("yes");
    else printf("no");
}