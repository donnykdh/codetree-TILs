#include <iostream>
#include <queue>
using namespace std;

int n, k;
int map[100][100];
bool visited[100][100];

int start[10000][2];  // 시작점을 저장하는 배열, 좌표는 두 개씩 저장해야 하므로 크기를 2로 수정
queue<pair<int, int>> q;

int cnt = 0;  // cnt를 1이 아닌 0으로 시작해야 함

bool range(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < n;
}

bool canGo(int i, int j){
    if(!range(i, j)){
        return false;
    }
    // map[i][j] == 0인 경우에만 이동 가능하게 수정
    if(visited[i][j] || map[i][j] != 0){
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
                cnt++;
                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }

    }
}

int main() {
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i = 0; i < k; i++){
        cin >> start[i][0] >> start[i][1];
        
        int sx = start[i][0] - 1; // 시작점 좌표를 1씩 줄여서 0-based로 변환
        int sy = start[i][1] - 1;
        
        if (!visited[sx][sy]) {  // 시작점이 이미 방문되지 않았을 때만 BFS 시작
            q.push(make_pair(sx, sy));
            visited[sx][sy] = true;
            cnt++;  // 시작점을 방문했으므로 cnt 증가
            BFS();  // BFS 탐색
        }
    }

    cout << cnt << endl;

    return 0;
}