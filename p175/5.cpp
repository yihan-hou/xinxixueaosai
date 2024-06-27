#include <iostream>
using namespace std;

struct number
{
    int n;
    number *next;
};

int main(){
    number *head, *r = nullptr;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        number *p = new number();
        cin >> p->n;
        if (r == nullptr) head = p;
        else r->next = p;
        r = p;
    }
    r->next = nullptr;
    int m; cin >> m;
    r = nullptr;
    for (number* i = head; i != nullptr; r = i, i = i->next){
        if (i->n == m){
            if (r == nullptr) head = head->next;
            else r->next = r->next->next;
        }
    }
    for (auto i = head; i!=nullptr; i = i->next){
        cout << i->n << ' ';
    }
}