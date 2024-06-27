#include <iostream>
#include <vector>
#include <map>
using namespace std;

int buf_count(vector<int> buf, int i){
    int b = 0;
    for (int j = 0; j < i; j++){
        if (buf[j] == buf[i]) b++;
    }
}
/*
def main():
    buf = [3, 1, 3, 2, 3]
    count = {}
    for x in buf:
        if x not in count: count[x] = 1
        else: count[x] += 1
    for key, value in buf.items():
        if value > len(buf) / 2:
            print(key)
            break
    else:
        print('no')
*/
int main(){
    int n; cin >> n;
    double m = n/2;
    map<int, int> counts;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (counts.count(a) == 0) counts[a] = 1;
        else counts[a] += 1;
    }
    for (auto kv:counts){
        //kv.first
        //kv.second
        if (kv.second > n/2) {
            cout << kv.first << endl;
            return 0;
        }
    }
    cout << "no" << endl;
}