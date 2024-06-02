#include <iostream>
using namespace std;
/*
0   0   7       *******
1   1   5        *****
2   2   3         ***
3   i   1          *

n=4
*/

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++)
			cout << "  ";
		for(int j = 0; j < (2 * n) - (2 * i) - 1; j++)
			cout << "* ";
		cout << endl;
    }

    return 0;
}