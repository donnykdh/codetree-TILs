#include <iostream>
using namespace std;

int n, m;
int arr[100000];


int Check(int target){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if( target == arr[mid]){
            return mid;
        }
        if(target < arr[mid]){
            right = mid - 1;
        }
        if(target > arr[mid]){
            left = mid + 1;
        }
    }

    return -2;

}



int main() {
    
    cin >> n >> m;

    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        cout << Check(num) + 1 << endl;

    }
    return 0;
}