#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;

    priority_queue<int> pq;

    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == "push"){
            int a;
            cin >> a;
            pq.push(a);
        }
        else if(str == "pop"){
            cout << pq.top() << endl;
            pq.pop();
        }
        else if(str == "size"){
            cout << pq.size() << endl;
        }
        else if(str == "empty"){
            cout << pq.empty() << endl;
        }
        else if(str == "top"){
            cout << pq.top() << endl;
        }
    }
    return 0;
}