#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int Max(int idx){
    if(idx == 0){
        return arr[0];
    }
    return max(Max(idx - 1), arr[idx]);
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << Max(n-1) << endl;

    return 0;
}