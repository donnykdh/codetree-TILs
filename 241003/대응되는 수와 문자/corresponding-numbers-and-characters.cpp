#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {

	int n, m;
	unordered_map<string, int> hm;
	string arr[100000];

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		hm[arr[i]] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		string input;
		cin >> input;

		if ('0' <= input[0] && input[0] <= '9') {
			cout << arr[stoi(input) - 1] << endl;
		}
		else {
			cout << hm[input] << endl;
		}
	}



	return 0;
}