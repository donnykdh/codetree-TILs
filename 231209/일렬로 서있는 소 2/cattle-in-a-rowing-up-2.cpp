#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++){
                if (arr[i] <= arr[j]){
                    if(arr[j] <= arr[k]){
                        cnt++;
                    }
                }
            }

    cout << cnt;
    return 0;
}