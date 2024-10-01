#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int n, b;
vector<pair<int, int>> price; // 가격 배송비

int main() {
    int p, s;
    
    // 입력받기
    cin >> n >> b;
    for (int i = 0; i < n; i++) {
        cin >> p >> s;
        price.push_back(make_pair(p, s));
    }

    int MAX = 0; // 선물 가능한 최대 학생 수

    // 모든 학생의 선물 총 비용을 구하기 위한 루프
    for (int i = 0; i < n; i++) {
        vector<int> total_costs;

        // 쿠폰을 적용하지 않은 경우의 총 비용 계산
        for (int j = 0; j < n; j++) {
            if (i == j) {
                total_costs.push_back((price[j].first / 2) + price[j].second); // 쿠폰 적용
            } else {
                total_costs.push_back(price[j].first + price[j].second);
            }
        }

        // 비용 오름차순 정렬 (최대한 많은 학생에게 선물하려면, 비용이 적은 것부터 선택)
        sort(total_costs.begin(), total_costs.end());

        // 예산을 초과하지 않는 범위 내에서 선물할 수 있는 학생 수 계산
        int current_sum = 0;
        int cnt = 0;
        for (int k = 0; k < n; k++) {
            current_sum += total_costs[k];
            if (current_sum > b) {
                break;
            }
            cnt++;
        }

        // 최대값 갱신
        MAX = max(MAX, cnt);
    }

    // 결과 출력
    cout << MAX << endl;

    return 0;
}