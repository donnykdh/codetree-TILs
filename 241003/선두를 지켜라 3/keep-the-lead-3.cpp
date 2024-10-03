#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> A;
vector<int> B;
vector<int>first;

int current_dis_A = 0;
int current_dis_B = 0;
int total_t = 0;




int main() {

    int cnt = 1;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        total_t += b;
        for(int j = 0; j < b; j++){
            A.push_back(a);
        }
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        for(int j = 0; j < b; j++){
            B.push_back(a);
        }
    }

    for(int t = 1; t <= total_t; t++){
        current_dis_A += A[t-1];
        current_dis_B += B[t-1];
        if(current_dis_A > current_dis_B){
            first.push_back(1);
        } 
        else if(current_dis_A < current_dis_B){
            first.push_back(2);
        }
        else{
            first.push_back(3);
        }
    }

    for(int i = 1; i < first.size(); i++){
        if(first[i] != first[i-1]){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}