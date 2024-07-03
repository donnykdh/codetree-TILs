#include <iostream>
using namespace std;

int cnt = 0;

int Func(int n){
    if(n ==1){
        return cnt;
    }
    if(n % 2 == 0){
        cnt++;
        Func(n/2);
        return cnt;
    }
    else{
        cnt++;
        Func(3*n+1);
        return cnt;
    }
}

int main() {
    int n;
    cin >> n;
    cout << Func(n);
    return 0;
}