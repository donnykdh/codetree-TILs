#include <iostream>
using namespace std;

int main() {
    int n;
    char arr[26];
    int tmp;
    int flag = 0;
    int cnt = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while(1){
        flag = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                flag = 1;
                cnt++;
                
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                
            }
        }
        if(flag == 0){
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}