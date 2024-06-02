#include <iostream>
using namespace std;
/*
n=4
********    0   404     n-i 2*i n-i
***  ***    1   323   
**    **    2   242
*      *    3   161   

*/

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int a = 0; a < n - i; a++){
            cout << "*";
        }
        for(int j = 0; j < 2 * i; j++){
            cout << " ";
        }
        for(int a = 0; a < n - i; a++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}