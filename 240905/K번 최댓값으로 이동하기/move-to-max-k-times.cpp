#include <iostream>
using namespace std;

int n, k, r, c;
int grid[100][100];

// 상하좌우 이동을 위한 dx, dy 배열
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

// 범위 체크 함수
bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

// k번 이동을 시도하는 함수
void move() {
    for (int step = 0; step < k; step++) {
        int maxVal = -1;
        int nextR = -1, nextC = -1;

        // 현재 위치에서 상하좌우로 이동 가능한 칸 탐색
        for (int d = 0; d < 4; d++) {
            int nr = r + dx[d];
            int nc = c + dy[d];

            if (inRange(nr, nc) && grid[nr][nc] < grid[r][c]) {
                if (grid[nr][nc] > maxVal) {
                    // 더 큰 값을 찾은 경우
                    maxVal = grid[nr][nc];
                    nextR = nr;
                    nextC = nc;
                } else if (grid[nr][nc] == maxVal) {
                    // 값이 동일한 경우 행, 열 우선순위 적용
                    if (nr < nextR || (nr == nextR && nc < nextC)) {
                        nextR = nr;
                        nextC = nc;
                    }
                }
            }
        }

        // 이동할 곳이 없으면 종료
        if (nextR == -1) {
            break;
        }

        // 다음 위치로 이동
        r = nextR;
        c = nextC;
    }
}

int main() {
    // 입력 받기
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // 시작 위치 입력 받기 (1-based -> 0-based로 변환)
    cin >> r >> c;
    r--; c--;

    // k번 이동 수행
    move();

    // 최종 위치 출력 (1-based로 변환)
    cout << r  << " " << c  << endl;

    return 0;
}