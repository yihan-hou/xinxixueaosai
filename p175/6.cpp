#include <iostream>
using namespace std;

struct student{
    string xuehao;
    string name;
    char sex;
    int age;
    int score;
    string address;
    student *prev;
};

int main(){
    student *head, *r = nullptr;
    while (true){
        student *p = new student();
        cin >> p->xuehao;
        if (p->xuehao != "end") cin >> p->name >> p->sex >> p->age >> p->score >> p->address;
        else break;
        p->prev = r;
        r = p;
    }
    for (auto i = r; i != nullptr; i = i->prev){
        cout << i->xuehao << ' ' << i->name << ' ' << i->sex << ' ' << i->age << ' ' << i->score << ' ' << i->address << endl;
    }
}