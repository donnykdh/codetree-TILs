#include <iostream>
using namespace std;

void Print(int n){
    int a = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a << " ";
            a++;
            if (a == 10) a = 1;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    Print(n);
    
    return 0;
}