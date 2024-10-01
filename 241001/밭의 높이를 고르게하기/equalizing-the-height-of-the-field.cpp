#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, H, T;
    
    // 첫 번째 줄 입력: N, H, T
    cin >> N >> H >> T;
    
    // 두 번째 줄 입력: N개의 밭의 높이 정보
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    
    int min_cost = 100;

    // 슬라이딩 윈도우로 길이가 T인 모든 구간을 탐색
    for (int i = 0; i <= N - T; i++) {
        int current_cost = 0;

        // 구간 내의 T개의 밭을 H로 맞추는 비용 계산
        for (int j = i; j < i + T; j++) {
            current_cost += abs(heights[j] - H);
        }

        // 최소 비용을 갱신
        min_cost = min(min_cost, current_cost);
    }

    // 결과 출력
    cout << min_cost << endl;

    return 0;
}