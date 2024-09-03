#include <iostream>
using namespace std;


int arr[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool range(int x, int y, int n){
    
    return x >= 0 && x < n && y >= 0 && y < n;
    
}

int main() {
    
    int n;
    cin >> n;
    int cnt = 0;
    int nx = 0;
    int ny = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cnt = 0;
            for(int k = 0; k < 4; k++){
                nx = i + dx[k];
                ny = j + dy[k];
                if(range(nx, ny, n) && arr[nx][ny]){
                    cnt++;
                }
            }
            if(cnt >= 3){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}