#include <iostream>

using namespace std;

int Factorial(int n) {
    if(n == 0)
        return 1;

    return Factorial(n - 1) * n;
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;
    
    cout << Factorial(n);
    return 0;
}