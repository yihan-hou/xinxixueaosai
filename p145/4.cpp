#include <iostream>
using namespace std;

struct student_t{
    string name;
    float score;
};

bool operator < (student_t s1, student_t s2){
    if (s1.score < s2.score || (s1.score == s2.score && s1.name > s2.name))return true;
    return false;
}

void paixu(student_t s[], int m){
    for (int i = 0; i < m; i++){
        for (int j = i; j < m; j++){
            if (s[i] < s[j]){
                student_t t = s[j];
                s[j] = s[i];
                s[i] = t;
            }
        }
    }
}

int main(){
    int n; cin >> n;
    student_t s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i].name >> s[i].score;
    }

    paixu(s, n);
    for (int i = 0; i < n; i++){
        cout << s[i].name << ' ' << s[i].score << endl;
    }
}