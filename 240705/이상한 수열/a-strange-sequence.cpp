#include <iostream>
using namespace std;

int func(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }

    return func(n/3) + func(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}