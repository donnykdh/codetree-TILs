#include <iostream>

using namespace std;

// n에서 시작하여 1이 되기 위해
// 거쳐야하는 횟수를 반환하는 함수
int GetNum(int n) {
    // 1이면 더 이상 진행할 작업이 없으므로 0회가 더 필요
    if(n == 1)
        return 0;

    // 짝수라면 2로 나눠 진행했을 때의 횟수 + 1번이 소요
    if(n % 2 == 0)
        return GetNum(n / 2) + 1;
    // 홀수라면 3으로 나누었을 때의 몫을 가지고 진행했을 때의 횟수 + 1번
    // 소요
    else
        return GetNum(n / 3) + 1;
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    cout << GetNum(n);
    return 0;
}