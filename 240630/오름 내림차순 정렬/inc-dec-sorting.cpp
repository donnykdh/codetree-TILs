#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define MAX_N 100

int nums[MAX_N];

int main() {
	// 변수 선언
	int n;
	
	// 입력
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> nums[i];
	
	// 오름차순 정렬
	sort(nums, nums + n);
	
	for(int i = 0; i < n; i++)
		cout << nums[i] << " ";
	cout << endl;
	
	// 내림차순 정렬
	sort(nums, nums + n, greater<int>());
	
	for(int i = 0; i < n; i++)
		cout << nums[i] << " ";
	cout << endl;
	
	return 0;
}