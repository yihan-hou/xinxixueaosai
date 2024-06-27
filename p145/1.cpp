#include <iostream>
using namespace std;

struct student_t{
    int score;
    string name;
};

int main(){
    int n; cin >> n;
    student_t s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i].score >> s[i].name;
    }

    int max = 0;
    int masc = s[0].score;
    for (int i = 0; i < n; i++){
        if (s[i].score > masc){
            max = i;
            masc = s[i].score;
        }
    }

    cout << s[max].name << endl;
}