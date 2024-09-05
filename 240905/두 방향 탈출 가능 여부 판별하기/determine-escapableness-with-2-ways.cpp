#include <iostream>
using namespace std;

int map[100][100];
int visited[100][100];

int n, m;

bool range(int i, int j){
    return i >=0 && i < n && j >= 0 && j < n; 
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

    int dx[2] = {1, 0};
    int dy[2] = {0, 1};

    for(int d = 0; d < 2; d++){
        int nx = i + dx[d];
        int ny = j + dy[d];

        if(canGo(nx, ny)){
            visited[nx][ny] = 1;
            DFS(nx, ny);
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

    visited[0][0] = 1;
    DFS(0, 0);

    cout << visited[n-1][m-1] << endl;

    return 0;
}