#include <iostream>
#include <unordered_map>
using namespace std;

int n, k;
int arr[100000];
unordered_map<int, int> hm;

int main() {
	int cnt = 0;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		hm[arr[i]] = k - arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] == hm[arr[j]]) {
				cnt++;
			}
		}
	}

	cout << cnt / 2 << endl;

	return 0;
}