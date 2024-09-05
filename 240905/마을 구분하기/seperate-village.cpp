#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int map[25][25];
int visited[25][25];
int cnt;
vector<int> ans;

bool range(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < n;
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

void DFS(int i, int j){

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    for(int d = 0; d < 4; d++){
        int nx = i + dx[d];
        int ny = j + dy[d];

        if(canGo(nx, ny)){
            visited[nx][ny] = 1;
            cnt++;
            DFS(nx, ny);
        }
    }
}

int main() {
    
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> map[i][j];
        }
    }

    // 시작점
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(canGo(i, j)){
                visited[i][j] = 1;
                cnt = 1;
                DFS(i, j);

                ans.push_back(cnt);
            }
        }
    }

    sort(ans.begin(), ans.end());

    cout << (int)ans.size() << endl;
    for(int i = 0; i < (int)ans.size(); i++){
        cout << ans[i] << endl;
    }


    return 0;
}