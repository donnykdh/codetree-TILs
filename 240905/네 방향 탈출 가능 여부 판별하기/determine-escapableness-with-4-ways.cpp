#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int map[100][100];
bool visited[100][100];

queue<pair<int, int>> q;

bool range(int i, int j){
    return i >= 0 && i < n && j >=0 && j < m;
}

bool canGo(int i, int j){
    if(!range(i, j)){
        return false;
    }
    if(visited[i][j] || map[i][j] == 0){
        return false;
    }
    return true;
}

void BFS(){

    while(!q.empty()){
        pair<int, int> curr_pos = q.front();
        int x = curr_pos.first;
        int y = curr_pos.second;
        q.pop();

        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, -1, 0, 1};

        for(int d = 0; d < 4; d++){
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(canGo(nx, ny)){
                q.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
    }

}

int main(){

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> map[i][j];
        }
    }
    q.push(make_pair(0, 0));
    visited[0][0] = true;

    BFS();

    cout << visited[n-1][m-1] << endl;

    return 0;
}