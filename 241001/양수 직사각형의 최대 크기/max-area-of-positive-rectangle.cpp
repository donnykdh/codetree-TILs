#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<vector<int>> matrix;
int res = -1;

bool canCal(int x, int y, int r, int c) {
    if (0 <= x && x + c < m && 0 <= y && y + r < n) {
        return true;
    }
    return false;
}

bool cal(int x, int y, int r, int c) {
    for (int i = 0; i <= c; ++i) {
        for (int j = 0; j <= r; ++j) {
            if (matrix[y + j][x + i] <= 0) {
                return false;
            }
        }
    }
    return true;
}

void simul(int x, int y) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (canCal(x, y, i, j)) {
                if (cal(x, y, i, j)) {
                    res = max(res, (j + 1) * (i + 1));
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    matrix.resize(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            simul(j, i);
        }
    }

    cout << res << endl;
    return 0;
}