#include <iostream>
#include <string>
using namespace std;

// 각 달의 일수를 저장 (윤년 고려)
int days_in_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 요일 이름을 저장
string weekdays[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

// 특정 요일의 인덱스를 반환하는 함수
int get_day_index(string day) {
    for (int i = 0; i < 7; i++) {
        if (weekdays[i] == day) {
            return i;
        }
    }
    return -1;
}

// 날짜 간의 총 일수를 계산하는 함수
int days_between(int m1, int d1, int m2, int d2) {
    int total_days = 0;

    // m1월부터 m2월까지 일수를 더함
    if (m1 == m2) {
        total_days = d2 - d1; // 같은 달인 경우
    } else {
        // 첫 번째 달 남은 일수를 더함
        total_days += days_in_month[m1] - d1;

        // 중간의 달들을 모두 더함
        for (int i = m1 + 1; i < m2; i++) {
            total_days += days_in_month[i];
        }

        // 마지막 달의 일수를 더함
        total_days += d2;
    }

    return total_days;
}

int main() {
    int m1, d1, m2, d2;
    string A;

    // 입력 받기
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    // 첫 번째 날짜의 요일이 월요일(Mon)이므로, 해당 요일의 인덱스는 0
    int start_day_index = 0;
    // A의 요일 인덱스를 가져옴
    int target_day_index = get_day_index(A);

    // 날짜 간 총 일수를 계산
    int total_days = days_between(m1, d1, m2, d2);

    // 시작 요일로부터 며칠간의 요일 변화를 계산
    int count = 0;
    for (int i = 0; i <= total_days; i++) {
        // 현재 요일을 계산
        int current_day_index = (start_day_index + i) % 7;
        // 주어진 요일 A와 같으면 카운트 증가
        if (current_day_index == target_day_index) {
            count++;
        }
    }

    // 결과 출력
    cout << count << endl;

    return 0;
}