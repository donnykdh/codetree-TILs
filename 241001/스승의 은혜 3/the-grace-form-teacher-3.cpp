#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int n, b;
vector<pair<int,int>> price;   // 가격 배송비
int total_sum;
int MAX = 0;
int cnt;

int main() {
    int p, s;
    
    cin >> n >> b;
    for(int i = 0; i < n; i++){
        cin >> p >> s;
        price.push_back(make_pair(p, s));
    }
    sort(price.begin(), price.end());


    // for(int i=0; i<(int)price.size(); i++)
    // {
    //     cout<<price[i].first<<' '<<price[i].second<<'\n';
    // }

    for(int i = 0; i < n; i++){
        total_sum = 0;
        cnt = 0;
        price[i].first /= 2;
        for(int j = 0; j < n; j++){
            total_sum += price[j].first + price[j].second;
            if(total_sum > b){
                cnt = j;
                break;
            }
            
        }
        if(cnt > MAX){
            MAX = cnt;
        }

    }

    cout << MAX << endl;

    
    
    return 0;
}