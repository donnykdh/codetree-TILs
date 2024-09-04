#include <iostream>
using namespace std;

int n;
int arr[20][20];
int MAX = 0;

int main() {
    
    int cnt;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cnt = 0;
            for(int k = 0; k < 3; k++){
                if(arr[i][j+k] < 0 || arr[i][j+k] >= n ||
                    arr[i+1][j+k] < 0 || arr[i+1][j+k] >= n ||
                    arr[i+2][j+k] < 0 || arr[i+2][j+k] >= n ){
                        break;
                    }
                if(arr[i][j+k] == 1){
                    
                    cnt++;
                }
                if(arr[i+1][j+k] == 1){
                    cnt++;
                }
                if(arr[i+2][j+k] == 1){
                    cnt++;
                }

            }
            if(cnt > MAX){
                MAX = cnt;
            }
        }
    }
    cout << MAX << endl;

    return 0;
}