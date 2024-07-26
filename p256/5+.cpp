#include <vector>
#include <iostream>
#include <list>
#include <map>
using namespace std;

typedef vector<vector<char>> grid_t;

class item_t {
public:
    int i, j;
    int score;
    grid_t grid;
    item_t(int i, int j, int score, grid_t grid) {
        this->i = i;
        this->j = j;
        this->score = score;
        this->grid = grid;
    }
};

int search(grid_t buf, int i, int j) {
    list<item_t> queue;
    queue.push_back(item_t(i, j, 1, buf));
    int rows = buf.size();
    int cols = buf[0].size();
    vector<vector<int>> scores(rows, vector<int>(cols, 0));
    auto try_push = [&scores, &queue, &buf, rows, cols](int i, int j, int score, grid_t grid) {
        if (i < 0 || j < 0 || i >= rows || j >= cols || buf[i][j] != '.') return;
        if (scores[i][j] >= score) return;
        if (grid[i][j] != '.') return;
        grid[i][j] = '0';
        queue.push_back(item_t(i, j, score, grid));
        scores[i][j] = score;
    };
    while(!queue.empty()) {
        item_t item = queue.front();
        queue.pop_front();
        try_push(item.i - 1, item.j, item.score + 1, item.grid);
        try_push(item.i + 1, item.j, item.score + 1, item.grid);
        try_push(item.i, item.j - 1, item.score + 1, item.grid);
        try_push(item.i, item.j + 1, item.score + 1, item.grid);
    }
    int best = 0;
    for (auto& row : scores)
    for (auto& col : row)
        best = max(best, col);
    return best;
}

int main(){
    int w,h; cin >> w >> h;
    int ax = 0; 
    int ay = 0;
    vector<vector<char>> buf;
    for (int i = 0; i < h; i++){
        vector<char> buf1;
        for (int j = 0; j < w; j++){
            char c; cin >> c;
            if (c == '@'){
                ax = i;
                ay = j;
            }
            buf1.push_back(c);
        }
        buf.push_back(buf1);
    }
    int i, j; cin >> i >> j;
    int best = search(buf, i, j);
    cout << best << endl;
    return 0;
}