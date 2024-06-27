#include <iostream>
using namespace std;

struct node_t
{
    int a;
    node_t* next;
};

int main(){
    node_t *head, *r = nullptr;
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        node_t *p = new node_t;
        p->a = i+1;
        if (r != nullptr) r->next = p;
        else head = p;
        r = p;
    }
    r->next = head;
    for (int i = 0; i < n; i++){
        node_t* r1 = r;
        for (int j = 0; j < m; j++)
        {
            r1 = r;
            r = r->next;
        }
        cout << r->a << ' ';
        r1->next = r->next;
        delete r;
        r = r1;
    }
}
