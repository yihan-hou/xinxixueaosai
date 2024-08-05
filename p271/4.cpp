#include <iostream>
#include <vector>
using namespace std;

struct Boxnumber
{
    int box1, box2, box3, box4, box5, box6;
};

int f(Boxnumber a)
{
    int box = a.box6 + a.box5 + a.box4 + a.box3/4;
    a.box1 -= a.box5*11;
    a.box2 -= a.box4*5;
    if (a.box2 < 0){
        a.box1 = max(0, a.box1+a.box2*4);
        a.box2 = 0;
    }
    if (a.box3%4 != 0){
        box++;
        if (a.box3%4 == 1){
            a.box1 -= 7;
            a.box2 -= 5;
            if (a.box2 < 0){
                a.box1 = max(0, a.box1+a.box2*4);
                a.box2 = 0;
            }
            a.box1 = max(a.box1, 0);
        }
        if (a.box3%4 == 2){
            a.box1 -= 6;
            a.box2 -= 3;
            if (a.box2 < 0){
                a.box1 = max(0, a.box1+a.box2*4);
                a.box2 = 0;
            }
            a.box1 = max(a.box1, 0);
        }
        if (a.box3%4 == 3){
            a.box1 -= 5;
            a.box2 -= 1;
            if (a.box2 < 0){
                a.box1 = max(0, a.box1+a.box2*4);
                a.box2 = 0;
            }
            a.box1 = max(a.box1, 0);
        }
    }
    box += a.box2/9;
    if (a.box2%9!=0){
        a.box1 = max(0, a.box1-9+a.box2%9);
    }
    box += a.box1/36;
    if (a.box1%36 != 0) box++;
    return box;
}

int main()
{
    vector<int> buf;
    while (true){
        Boxnumber a;
        cin >> a.box1 >> a.box2 >> a.box3 >> a.box4 >> a.box5 >> a.box6;
        if (a.box1 == 0 && a.box2 == 0 && a.box3 == 0 && a.box4 == 0 && a.box5 == 0 && a.box6 == 0)
            break;
        buf.push_back(f(a));
    }
    for (int i : buf)
        cout << i << endl;
}