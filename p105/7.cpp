#include <iostream>
using namespace std;

int main(){
    string atcg; cin >> atcg;
    for (int i = 0; i < atcg.size(); i++){
        if (atcg[i] == 'A'){
            atcg[i] = 'T';
        }
        else if (atcg[i] == 'T'){
            atcg[i] = 'A';
        }
        else if (atcg[i] == 'C'){
            atcg[i] = 'G';
        }
        else atcg[i] = 'C';
    }
    cout << atcg << endl;
    return 0;
}