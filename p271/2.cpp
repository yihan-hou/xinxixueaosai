#include <iostream>
#include <vector>
using namespace std;

int g(int x1, int y1, int x2, int y2, vector<vector<int>>& buf){
    int a = buf[x2][y2];
    int b = x1*y1 ? buf[x1-1][y1-1] : 0;
    int c = x1 ? buf[x1-1][y2] : 0;
    int d = y1 ? buf[x2][y1-1] : 0;
    return a + b - c - d;
}

int max1(vector<int> buf){
    int m = buf[0];
    for (int i = 1; i < buf.size(); i++){
        if (buf[i] > m) m = buf[i];
    }
    return m;
}

void h(vector<vector<int>>& buf){
    for (int i = 0; i < buf.size(); i++){
        for (int j = 0; j < buf.size(); j++){
            int a, b, c, d;
            if (i == 0){
                a = buf[i][j];
                b = 0;
                c = buf[i][j-1];
                d = 0;
            }
            else if (j == 0){
                a = buf[i][j];
                b = 0;
                c = 0;
                d = buf[i-1][j];
            }
            else{
                a = buf[i][j];
                b = buf[i-1][j-1];
                c = buf[i][j-1];
                d = buf[i-1][j];
            }
            buf[i][j] = a-b+c+d;
        }
    }
}

int f(vector<vector<int>> buf){
    h(buf);
    vector<int> buf1;
    for (int x1 = 0; x1 < buf.size(); x1++){
        for (int x2 = x1; x2 < buf.size(); x2++){
            for (int y1 = 0; y1 < buf.size(); y1++){
                for (int y2 = y1; y2 < buf.size(); y2++){
                    buf1.push_back(g(x1, y1, x2, y2, buf));
                }
            }
        }
    }
    return max1(buf1);

}

int main(){
    int n; cin >> n;
    vector<vector<int>> buf;
    for (int i = 0; i < n; i++){
        vector<int> buf1;
        for (int j = 0; j < n; j++){
            int a; cin >> a;
            buf1.push_back(a);
        }
        buf.push_back(buf1);
    }
    cout << f(buf) << endl;
    return 0;
}