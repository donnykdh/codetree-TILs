#include <iostream>
#include <unordered_map>
using namespace std;


int n;
unordered_map<int, int> hm;


int main() {
    long long sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(hm.find(x) == hm.end()){
            hm[x] = y;
            sum += hm[x];
        }
        else{
            if(hm[x] >= y){
                sum -= hm[x];
                hm[x] = y;
                sum += hm[x];
            }
        }

    }
    cout << sum << endl;
    
    return 0;
}