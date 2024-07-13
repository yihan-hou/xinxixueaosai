#include <iostream>
#include <vector>
using namespace std;

struct Rational{
    int numerator;
    int denominator;
    Rational operator + (Rational b) {
        Rational s = {0, 1};
        s.numerator = numerator*b.denominator + b.numerator*denominator;
        s.denominator = denominator*b.denominator;
        return s;
    }
};

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int n; cin >> n;
    vector<Rational> buf;
    Rational s = {0, 1};
    for (int i = 0; i < n; i++){
        char comma;
        Rational a; cin >> a.numerator >> comma >> a.denominator;
        s = s+a;
    }
    int g = gcd(s.numerator, s.denominator);
    if (s.denominator/g != 1) cout << s.numerator/g << '/' << s.denominator/g << endl;
    else cout << s.numerator/g << endl;
    return 0;
}