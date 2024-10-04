#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x != 0){
            pq.push(x);
        }    
        else{
            if(pq.empty()){
                cout << 0 << endl;
            }
            else{
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
    
    return 0;
}