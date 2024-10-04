#include <iostream>
#include <unordered_map>
using namespace std;

string str;
char ans;
unordered_map<char, int> hm;

int main() {

    cin >> str;
    int flag = 0;
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
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << ans << endl;
    }
    else{
        cout << "None" << endl;
    }
    
    return 0;
}