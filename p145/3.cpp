#include <iostream>
using namespace std;

struct student_t{
    string number;
    float score;
};

void paixu(student_t s[], int m){
    for (int i = 0; i < m; i++){
        for (int j = i; j < m; j++){
            if (s[i].score < s[j].score){
                student_t t = s[j];
                s[j] = s[i];
                s[i] = t;
            }
        }
    }
}

int main(){
    int n, k; cin >> n >> k;
    student_t s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i].number >> s[i].score;
    }
    paixu(s, n);
    cout << s[k-1].number << ' ' << s[k-1].score << endl;
}