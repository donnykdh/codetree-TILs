#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
unordered_map<int, int> nums;
int arr[100000];
int ans[100000];
vector<int> answer;


int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(nums.find(arr[i]) == nums.end()){
            nums[arr[i]] = 1;
        }
        else{
            nums[arr[i]] = nums[arr[i]] + 1;
        }

    }

    for(int i = 0; i < m; i++){
        cin >> ans[i];
    }
    
    for(int i = 0; i < m; i++){
        if(nums.find(ans[i]) != nums.end()){
            answer.push_back(nums[ans[i]]);
        }
        else{
            answer.push_back(0);
        }
    }

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }


    return 0;
}