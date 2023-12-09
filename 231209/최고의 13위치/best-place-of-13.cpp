#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int arr[20][20];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int max_cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - 1; j++)
            max_cnt = max(max_cnt, arr[i][j] + arr[i][j + 1] + arr[i][j + 2]);
    
    cout << max_cnt;
}