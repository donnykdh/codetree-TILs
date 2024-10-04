#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int n;
string arr[1000];
unordered_map<string, int> hm;
int MAX = 0;

int main() {

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        int len = arr[i].length();
        sort(&arr[i][0], &arr[i][len]);
        if(hm.find(arr[i]) == hm.end()){
            hm[arr[i]] = 1;
        }
        else{
            hm[arr[i]]++;
        }
        if(hm[arr[i]] > MAX){
            MAX = hm[arr[i]];
        }
    }

    cout << MAX << endl;


    return 0;
}