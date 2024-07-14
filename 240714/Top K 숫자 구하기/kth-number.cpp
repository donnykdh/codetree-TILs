#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000

// 변수 선언
int n, k;

int nums[MAX_N];

int main(){
    // 입력:
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // nums[0]부터 nums[n - 1]까지를 정렬함
    sort(nums, nums + n);

    // k번째 원소를 출력 (원소 k-1)
    cout << nums[k - 1];

    return 0;
}