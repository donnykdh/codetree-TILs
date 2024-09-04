#include <iostream>
using namespace std;

int n;
int arr[20][20];
int MAX = 0;

bool range(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < n;
}

// 4번째 방향: 대각선 ↘
int Fourth(int i, int j, int k1, int k2, int sum) {
    if (range(i + k2, j + k2)) {
        for (int a = 1; a <= k2; a++) {
            sum += arr[i + a][j + a];
        }
    } else {
        return 0;
    }
    return sum;
}

// 3번째 방향: 대각선 ↙
int Third(int i, int j, int k1, int k2, int sum) {
    if (range(i + k1, j - k1)) {
        for (int a = 1; a <= k1; a++) {
            sum += arr[i + a][j - a];
        }
    } else {
        return 0;
    }
    return Fourth(i + k1, j - k1, k1, k2, sum);
}

// 2번째 방향: 대각선 ↖
int Second(int i, int j, int k1, int k2, int sum) {
    if (range(i - k2, j - k2)) {
        for (int a = 1; a <= k2; a++) {
            sum += arr[i - a][j - a];
        }
    } else {
        return 0;
    }
    return Third(i - k2, j - k2, k1, k2, sum);
}

// 1번째 방향: 대각선 ↗
int First(int i, int j, int k1, int k2) {
    int sum = 0;
    if (range(i - k1, j + k1)) {
        for (int a = 1; a <= k1; a++) {
            sum += arr[i - a][j + a];
        }
    } else {
        return 0;
    }
    return Second(i - k1, j + k1, k1, k2, sum);
}

int main() {
    cin >> n;
    
    // 배열 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // 시작점
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k1 = 1; k1 < n; k1++) {
                for (int k2 = 1; k2 < n; k2++) {
                    int sum = First(i, j, k1, k2);
                    if (sum > MAX) {
                        MAX = sum;
                    }
                }
            }
        }
    }
    
    cout << MAX << endl;

    return 0;
}