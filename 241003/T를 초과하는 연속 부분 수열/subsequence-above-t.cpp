#include <iostream>
using namespace std;

int n, t;
int arr[1000];
int MAX = 0;

int main() {
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > t){
            cnt++;
            if(cnt > MAX){
                MAX = cnt;
            }
        }
        else if(arr[i] <= t){
            cnt = 0;
            //break;
        }
    }
    cout << MAX << endl;




    return 0;
}