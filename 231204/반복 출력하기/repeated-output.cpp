#include <iostream>
using namespace std;

void PrintNLines(int n){
    for(int i = 0; i < n; i++){
        for(int j =1; j <= 5; j++){
            cout << j;
        }
        cout << "^&*()_";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    PrintNLines(n);

    return 0;
}