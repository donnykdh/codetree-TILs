#include <iostream>
using namespace std;

int func(int n) {
    if(n < 10)
        return n*n;

    return func(n / 10) + (n % 10)*(n % 10);
}

int main() {
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}