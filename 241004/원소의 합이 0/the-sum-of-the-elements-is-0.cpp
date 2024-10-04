#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int n;
vector<int> A;
vector<int> B;
vector<int> C;
vector<int> D;

unordered_map<int, int> sumAB;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    for(int j = 0; j < n; j++){
        int a;
        cin >> a;
        B.push_back(a);
    }
    for(int j = 0; j < n; j++){
        int a;
        cin >> a;
        C.push_back(a);
    }
    for(int j = 0; j < n; j++){
        int a;
        cin >> a;
        D.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumAB[A[i] + B[j]]++;
        }
    }

    long long result = 0;
    
    // C와 D에서 합이 -(A+B)인 경우를 찾음
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int target = -(C[i] + D[j]);
            if (sumAB.find(target) != sumAB.end()) {
                result += sumAB[target];
            }
        }
    }
    
    // 결과 출력
    cout << result << endl;




    return 0;
}