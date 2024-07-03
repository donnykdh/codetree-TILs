#include <iostream>
using namespace std;

int a, b, c;

int Mul(int a, int b, int c){
    return a * b * c;
}

int Sum(int num){
    if(num < 10){
        return num;
    }
    return Sum(num / 10) + (num % 10);
}

int main() {
    cin >> a >> b >> c;
    cout << Sum(Mul(a, b, c));
    return 0;
}