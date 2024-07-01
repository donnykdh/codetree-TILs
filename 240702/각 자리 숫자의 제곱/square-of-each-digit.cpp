#include <iostream>
using namespace std;

int Func(int n){
    if(n < 10){
        return n*n;
    }
    return Func(n / 10) + (n % 10) * (n % 10);
}

int main() {
    int n;
    cin >> n;

    cout<< Func(n);
    return 0;
}