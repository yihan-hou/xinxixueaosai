#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<char>> buf) {
    for (int i = 0; i < buf.size(); ++i) {
        for (int j = 0; j < buf.size(); ++j) {
            cout << buf[i][j];
        }
        cout << endl;
    }
}
int main() {
    int n; cin >> n;
    vector<vector<char>> buf;
    for (int i = 0; i < n; i++) {
        vector<char> buf1;
        for (int j = 0; j < n; j++) {
            char a; cin >> a;
            buf1.push_back(a);
        }
        buf.push_back(buf1);
    }
    int m; cin >> m;
    for (int m1 = 2; m1 <= m; m1++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (buf[i][j] == '@') {
                    char up = i > 0 ? buf[i - 1][j] : '#';
                    char dowm = i < n - 1 ? buf[i + 1][j] : '#';
                    char left = j > 0 ? buf[i][j - 1] : '#';
                    char right = j < n - 1 ? buf[i][j + 1] : '#';
                    if (up != '#') buf[i - 1][j] = '0';
                    if (dowm != '#') buf[i + 1][j] = '0';
                    if (left != '#') buf[i][j - 1] = '0';
                    if (right != '#') buf[i][j + 1] = '0';
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (buf[i][j] == '0') buf[i][j] = '@';
                //else if (buf[i][j] == '@') buf[i][j] = '1';
            }
        }
    }

    int p = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (buf[i][j] == '@' || buf[i][j] == '1') p++;
        }
    }
    cout << p << endl;
    return 0;
}