#include <iostream>
#include <string>
using namespace std;

// 각 달의 일수를 저장 (윤년 고려)
int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

// 특정 날짜(m월, d일)까지의 총 일수를 계산하는 함수
int NumOfDays(int m, int d) {
    int total_days = 0;
    // 1월부터 (m-1)월까지의 일수를 모두 더함
    for(int i = 1; i < m; i++) {
        total_days += month[i];
    }
    // 현재 m월의 일수를 더함
    total_days += d;
    return total_days;
}

// 요일의 인덱스를 반환하는 함수
int get_day_index(string day) {
    for (int i = 0; i < 7; i++) {
        if (day_of_week[i] == day) {
            return i;
        }
    }
    return -1; // 찾을 수 없는 경우
}

int main() {
    int m1, d1, m2, d2;
    string day;
    
    // 입력 받기
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> day;
    
    // 입력된 요일의 인덱스를 가져옴
    int start_day_index = get_day_index("Mon"); // 시작 요일은 월요일
    int target_day_index = get_day_index(day);  // 찾고자 하는 요일의 인덱스

    // 첫 번째 날짜까지의 총 일수와 두 번째 날짜까지의 총 일수 계산
    int total_days_start = NumOfDays(m1, d1);  // 첫 번째 날짜까지의 총 일수
    int total_days_end = NumOfDays(m2, d2);    // 두 번째 날짜까지의 총 일수
    
    // 두 날짜 간의 총 일수 차이
    int total_diff_days = total_days_end - total_days_start;
    
    // 첫 번째 날짜의 요일 인덱스를 계산
    int current_day_index = (start_day_index + total_days_start - 1) % 7;

    // 범위 내에서 타겟 요일이 몇 번 등장하는지 계산
    int count = 0;
    for (int i = 0; i <= total_diff_days; i++) {
        if ((current_day_index + i) % 7 == target_day_index) {
            count++;
        }
    }

    // 결과 출력
    cout << count << endl;

    return 0;
}