#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> m;
string arr[100000];
int MAX = 0;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (m.find(arr[i]) == m.end()) {
            m[arr[i]] = 1;
        }
        else {
            m[arr[i]]++;
        }
        if (m[arr[i]] > MAX) {
            MAX = m[arr[i]];
        }
    }

    cout << MAX << endl;

    
    return 0;
}