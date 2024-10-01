#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int N, S;
    
    // 첫 번째 줄에서 N과 S 입력 받기
    cin >> N >> S;
    
    // 두 번째 줄에서 N개의 숫자 입력 받기
    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    // 모든 숫자의 합 계산
    int total_sum = 0;
    for (int i = 0; i < N; i++) {
        total_sum += numbers[i];
    }
    
    // S와 가장 가까운 경우의 차이를 저장할 변수
    int min_diff = INT_MAX;
    
    // 두 개의 숫자를 제외하는 모든 경우를 확인
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // 두 수를 제외한 나머지의 합 계산
            int remaining_sum = total_sum - numbers[i] - numbers[j];
            
            // S와의 차이 계산
            int diff = abs(remaining_sum - S);
            
            // 최소 차이를 갱신
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
    }
    
    // 최소 차이를 출력
    cout << min_diff << endl;
    
    return 0;
}