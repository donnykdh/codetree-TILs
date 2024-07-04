#include <iostream>
using namespace std;


int Func(int n){
    if(n == 1){
        return 2;
    }
    else if(n == 2){
        return 4;
    }

    return (Func(n-2)*Func(n-1)) % 100;

}


int main() {
    int n;
    cin >> n;

    cout << Func(n);

    return 0;
}