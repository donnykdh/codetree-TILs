#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
	// 출력
    cout << (c * 60 + d) - (a * 60 + b);
    return 0;
}