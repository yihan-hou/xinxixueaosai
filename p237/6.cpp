#include <iostream>
#include <vector>
using namespace std;

string s(string a){
    string a1 = a;
    int t_bra_c = 0;
    for (int i = 0; i < a1.size(); i++){
        if (a[i] != '(' && a[i] != ')') a1[i] = ' ';
        else{
            if (a[i] == '(') t_bra_c++;
            else if (a[i] == ')') t_bra_c--;
            if (t_bra_c < 0) {
                a1[i] = '?';
                t_bra_c++;
            }
            else a1[i] = ' ';
        }
    }
    t_bra_c = 0;
    for (int i = a1.size()-1; i >= 0; i--){
        if (a[i] == '(') t_bra_c++;
        else if (a[i] == ')') t_bra_c--;
        if (t_bra_c > 0) {
            a1[i] = '$';
            t_bra_c--;
        }
    }
    return a1;
}

int main(){
    int n; cin >> n;
    vector<string> ent_buf;
    vector<string> pri_buf;
    for (int i = 0; i < n; i++){
        string a; cin >> a;
        ent_buf.push_back(a);
        pri_buf.push_back(s(a));
    }
    for (int i = 0; i < n; i++){
        cout << ent_buf[i] << endl << pri_buf[i] << endl;
    }
    return 0;
}