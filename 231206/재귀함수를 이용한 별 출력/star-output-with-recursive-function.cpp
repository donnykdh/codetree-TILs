#include <iostream>
using namespace std;

void func(int n){
    if( n ==0)
        return;
    
    func(n-1);
    for(int i = 0; i < n; i++){
        cout << "*";
    }
    cout << endl;
}

int main() {
    
    int n;
    cin >> n;
    func(n);
    return 0;
}