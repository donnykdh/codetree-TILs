#include <iostream>
#include <queue>
using namespace std;

int MAX = -200000000;

int main() {
    int n, m;
    cin >> n >> m;

    priority_queue<int> pq;

    for(int i = 0; i < n; i++){
        int num;
        
        cin >> num;
        pq.push(num);
        
    }

    for(int i = 0; i < m; i++){
        int MAX_num;
        MAX_num = pq.top() - 1;
        //cout << pq.top() << endl;
        pq.pop();
        pq.push(MAX_num);

        MAX = pq.top();
        
    }

    cout << MAX << endl;
    return 0;
}