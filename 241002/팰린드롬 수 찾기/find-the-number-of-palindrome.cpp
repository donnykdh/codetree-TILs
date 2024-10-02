#include <iostream>
#include <vector>
using namespace std;


int x, y;
vector<int> nums;
int flag;
int ans;

int main() {
    cin >> x >> y;
    ans = 0;
    for(int i = x; i <= y; i++){
        flag = 0;
        int current_num;
        current_num = i;
        //cout << current_num<<endl;
        nums.clear();
        //cout << i<<":"<<(int)nums.size()<<endl;
        while(1){
            int dig;
            dig = current_num % 10;
            nums.push_back(dig);
            current_num /= 10;
            if(current_num == 0){
                break;
            }
        }
        // cout << i<<":"<<nums.size()<<endl;

        for(int j = 0; j < (int)nums.size()/2; j++){

            if(nums[j] != nums[nums.size()-1-j]){
                flag = 1;
                //cout << nums.size()-1-j << endl;
                break;
            }
        }
        if(flag == 0){
            ans++;
        }
    
    }
    cout << ans << endl;
    return 0;
}