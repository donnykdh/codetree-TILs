#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100000];
int counts[100000];

int main() {
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int ans = 0;
    int j = 0;
    for(int i = 1; i <= n; i++){

        while(j + 1 <= n && counts[arr[j+1]] != 1){
            counts[arr[j+1]]++;
            j++;
        }

        ans = max(ans, j - i + 1);

        counts[arr[i]]--;

    }

    cout << ans << endl;
    return 0;
}