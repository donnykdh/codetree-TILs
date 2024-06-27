#include <iostream>
using namespace std;

void Function(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    Function(n-1);
    cout << n << " ";

}

int main() {
    int n;
    cin >> n;
    Function(n);
    return 0;
}