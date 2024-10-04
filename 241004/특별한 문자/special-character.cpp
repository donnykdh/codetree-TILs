#include <iostream>
#include <unordered_map>
using namespace std;

string str;
char ans;
unordered_map<char, int> hm;

int main() {

    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(hm.find(str[i]) == hm.end()){
            hm[str[i]] = 1;
        }
        else{
            hm[str[i]]++;
        }
    }

    for(int i = 0; i < str.length(); i++){
        if(hm[str[i]] == 1){
            ans = str[i];
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}