#include <iostream>
#include <vector>
#include <string>
using namespace std;

string read(string& s){
    string s1 = "", op = "";
    int e = 0;
    int i = 0;
    string num = "";
    while (true) {
        auto c = s[i++];
        bool is_digit = c == '.' || ('0' <= c && c <= '9');
        bool is_space = c == ' ';
        bool is_op = c == '+' || c == '-' || c == '*' || c == '/';
        switch (e)
        {
        case 0:
            if (is_digit) {
                num = c;
                e = 1;
            }
            else if (is_op) {
                op = c;
                s = s.substr(i);
                return op;
            }
            break;
        case 1:
            if (is_digit) {
                num += c;
            }
            else if (is_space || is_op) {
                s = s.substr(i);
                return num;
            }
            break;
        }
    }
}

float g(string op, float a, float b){
    if (op == "+") return a+b;
    else if (op == "-") return a-b;
    else if (op == "*") return a*b;
    else return a/b;
}

float f(string& s){
    string head = read(s);
    float a = 0;
    float b = 0;
    if (head == "+" || head == "-" || head == "*" || head == "/"){
        a = f(s);
        b = f(s);
        return g(head, a, b);
    }
    else{
        return stof(head);
    }
}

int main(){
    string s;
    char buf[1001];
    cin.getline(buf, 1000);
    s = buf;
    s += ' ';
    float v = f(s);
    printf("%f\n", v);
    return 0;
}