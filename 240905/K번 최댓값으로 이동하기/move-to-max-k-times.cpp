#include <iostream>
#include <queue>

#define MAX_N 100
#define DIR_NUM 4
#define NOT_EXISTS make_pair(-1, -1)

using namespace std;

int n, k;
int grid[MAX_N][MAX_N];

// 현재 위치
pair<int, int> curr_cell;

queue<pair<int, int>> q;
bool visited[MAX_N][MAX_N];

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool CanGo(int x, int y, int target_num) {
    return InRange(x, y) && !visited[x][y] && grid[x][y] < target_num;
}

// visited 배열을 초기화 해줍니다.
void InitializeVisited() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            visited[i][j] = false;
}

void BFS() {
    int dx[DIR_NUM] = {0, 1, 0, -1};
    int dy[DIR_NUM] = {1, 0, -1, 0};

    int curr_x = curr_cell.first;
    int curr_y = curr_cell.second;
    
    visited[curr_x][curr_y] = true;
    q.push(curr_cell);
    
    int target_num = grid[curr_x][curr_y];
    
    // BFS 탐색을 수행합니다.
    while(!q.empty()) {
        pair<int, int> curr_pos = q.front();
        int curr_x = curr_pos.first;
        int curr_y = curr_pos.second;
        q.pop();

        for(int i = 0; i < DIR_NUM; i++) {
            int new_x = curr_x + dx[i];
            int new_y = curr_y + dy[i];

            if(CanGo(new_x, new_y, target_num)) {
                q.push(make_pair(new_x, new_y));
                visited[new_x][new_y] = true;
            }
        }
    }
}

// best 위치를 새로운 위치로 바꿔줘야 하는지를 판단합니다.
bool NeedUpdate(pair<int, int> best_pos, pair<int, int> new_pos) {
    if(best_pos == NOT_EXISTS)
        return true;

    int best_x = best_pos.first;
    int best_y = best_pos.second;
    
    int new_x = new_pos.first;
    int new_y = new_pos.second;

    if (grid[new_x][new_y] > grid[best_x][best_y]) return true;
    if (grid[new_x][new_y] == grid[best_x][best_y]) {
        if (new_x < best_x) return true;
        if (new_x == best_x && new_y < best_y) return true;
    }
    
    return false;
}

// 가장 우선순위가 높은 위치를 찾아 이동합니다.
bool Move() {
    InitializeVisited();
    
    BFS();
    
    pair<int, int> best_pos = NOT_EXISTS;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(!visited[i][j] || make_pair(i, j) == curr_cell)
                continue;
            
            pair<int, int> new_pos = make_pair(i, j);
            if(NeedUpdate(best_pos, new_pos))
                best_pos = new_pos;
        }
    }
    
    if(best_pos == NOT_EXISTS)
        return false;
    else {
        curr_cell = best_pos;
        return true;
    }
}

int main() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) 
            cin >> grid[i][j];
    
    int r, c;
    cin >> r >> c;
    curr_cell = make_pair(r - 1, c - 1);
    
    while(k--) {
        bool is_moved = Move();
        if(!is_moved)
            break;
    }
    
    cout << curr_cell.first + 1 << " " << curr_cell.second + 1;
}