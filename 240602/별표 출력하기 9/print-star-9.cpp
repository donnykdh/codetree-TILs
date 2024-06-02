#include <iostream>
using namespace std;
/*
n = 3
0   2   1
1   1   3      
2   0   5   n-i-1   2*i+1   

*/


int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n-i-1; j++){
            cout << "  ";
        }
        for(int k = 0; k < 2*i+1; k++){
            cout << "* ";
        }
        cout << endl;
    }
  
    
    return 0;
}