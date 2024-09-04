#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[200][200];
int MAX = 0;

// 계단식 블럭: 2x2에서 한 칸을 제외하는 방식으로 최솟값을 뺌
int stairCase(int a, int b) {
    if (a + 1 >= n || b + 1 >= m) return 0;
    
    // 2x2 블럭의 4개 숫자 중에서 최솟값을 뺌
    int sum = arr[a][b] + arr[a][b+1] + arr[a+1][b] + arr[a+1][b+1];
    int minVal = min({arr[a][b], arr[a][b+1], arr[a+1][b], arr[a+1][b+1]});
    
    return sum - minVal;
}

// 1x3 직선형 블럭 (가로, 세로 모두)
int lineCase(int a, int b) {
    int max_sum = 0;

    // 1. 가로로 놓은 경우
    if (b + 2 < m) {
        int sum = arr[a][b] + arr[a][b+1] + arr[a][b+2];
        max_sum = max(max_sum, sum);
    }

    // 2. 세로로 놓은 경우
    if (a + 2 < n) {
        int sum = arr[a][b] + arr[a+1][b] + arr[a+2][b];
        max_sum = max(max_sum, sum);
    }

    return max_sum;
}

int main() {
    cin >> n >> m;

    // 배열 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // 모든 위치에서 각 블럭을 놓아보고 최대값 계산
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            MAX = max(MAX, stairCase(i, j)); // 계단식 블럭
            MAX = max(MAX, lineCase(i, j));  // 1x3 블럭 (가로, 세로 포함)
        }
    }

    cout << MAX << endl;

    return 0;
}