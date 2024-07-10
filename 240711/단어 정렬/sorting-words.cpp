#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 100

using namespace std;
int n;
string word_list[MAX_N];

int main() {    

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> word_list[i];
    }
    
    sort(word_list, word_list + n);
    
    for(int i = 0; i < n; i++)
        cout << word_list[i] << endl;
    return 0;
}