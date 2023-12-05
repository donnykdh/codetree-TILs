#include <iostream>
using namespace std;

int func(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
        
    }
    return sum;
}

int main() {

    int n;
    cin >> n;
    cout << func(n)/10;
    return 0;
}