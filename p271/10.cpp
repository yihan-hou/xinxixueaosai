#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int min1(vector<int> buf){
    int m = 0;
    for (int i = 1; i < buf.size(); i++){
        if (buf[i] < buf[m]) m = i;
    }
    return m;
}
/*time += (time_list[time_list.size()-1] + time_list[time_list.size()-2]);
    vector<int> another = {time_list[time_list.size()-2]};
    time_list.erase(time_list.begin()+time_list.size()-2);
    while (time_list.size() != 0 && time_list.size() != 1){
        sort(time_list.rbegin(), time_list.rend());
        int a = time_list[0];
        int b = time_list[1];
        time += a;
        time_list.erase(time_list.begin());
        time_list.erase(time_list.begin());
        another.push_back(a);
        another.push_back(b);
        int i = min1(another);
        int c = another[i];
        //if (time_list.size() != 0){
        another.erase(another.begin()+i);
        time_list.push_back(c);
        //}*/
    //if (time_list.size() == 1) 

int min_time(vector<int> time_list){
    int time = 0;
    sort(time_list.begin(), time_list.end());
    int a = time_list.size();
    if (a%2 == 1){
        time += (a-2)*time_list[1]+(ceil(double(a-2)/2))*time_list[0];
        for (int i = a; i >= 3; i-=2) time += time_list[i-1];
    }
    else {
        time += ((a-4)/2+1)*time_list[0]+(((a-4)/2+1)*2+1)*time_list[1];
        for (int i = a; i >= 4; i -= 2) time += time_list[i-1];
    }
    return time;
}

int main(){
    int t; cin >> t;
    vector<int> print;
    for (int i = 0; i < t; i++){
        int n; cin >> n;
        vector<int> time_list;
        for (int j = 0; j < n; j++){
            int time; cin >> time;
            time_list.push_back(time);
        }
        print.push_back(min_time(time_list));
    }
    for(int i:print) cout << i << endl;
    return 0;
}