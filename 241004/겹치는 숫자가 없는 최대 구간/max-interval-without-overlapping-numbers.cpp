#include <iostream>

using namespace std;

int n;
int arr[1000];
int count[1000];

int main() {
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int ans = 0;
    int j = 0;
    for(int i = 1; i <= n; i++){

        while(j + 1 <= n && count[arr[j+1]] == 0){
            count[arr[j+1]]++;
            j++;
        }

        if((j - i + 1) > ans){
            ans = j - i + 1;
        }

        count[arr[i]]--;

    }

    cout << ans << endl;
    return 0;
}