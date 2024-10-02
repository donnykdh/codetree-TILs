#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int a, b, n;
int nums[9];
vector<int> ans;

int main() {
    cin >> a >> b;
    cin >> n;
    int cnt = 0;
    int dec = 0;

    while(1){
        nums[cnt] = n % 10;
        cnt++;
        n /= 10;
        if(n == 0){
            break;
        }      
    }
    for(int i = 0; i < cnt; i++){
        
        dec += nums[i] * pow(a, i);
    }

    //cout << dec<< endl;
    while(1){
        ans.push_back(dec % b);
        dec /= b;
        if(dec == 0){
            break;
        }
    }

    for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i];
    }
    return 0;
}