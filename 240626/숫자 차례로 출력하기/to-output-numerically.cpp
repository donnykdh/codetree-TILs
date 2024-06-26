#include <iostream>
using namespace std;

void func(int n){
    if(n == 0){
        return;
    }
    func(n-1);

    cout << n << " ";

}

void func2(int n){
    if(n == 0){
        return;
    }

    cout << n << " ";
    func2(n-1);

}

int main() {
    
    int n;
    cin >> n;
    func(n);
    cout << endl;
    func2(n);
    return 0;
}