#include <iostream>
using namespace std;

int n, m;
int arr[200][200];
int MIN = 1000;
int MAX = 1;


int firstCase(int a, int b){
    int sum = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(a+i >= n || b+j >= m){
                return 0;
            }
            if(arr[a+i][b+j] <= MIN){
                MIN = arr[a+i][b+j];
            }
            sum += arr[a+i][b+j];
        }
    }
    return sum - MIN;
}

int secondCase(int a, int b){
    int sum = 0;
    if(b + 1 >= m || b + 2 >= m){
        return 0;
    }
    else{
        return arr[a][b] + arr[a][b + 1] + arr[a][b + 2];
    }
}

int thirdCase(int a, int b){
    int sum = 0;
    if(a + 1 >= n || a + 2 >= n){
        return 0;
    }
    else{
        return arr[a][b] + arr[a + 1][b] + arr[a + 2][b];
    }
}


int main() {
    cin >> n >> m;
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(firstCase(i, j) >= MAX){
                MAX = firstCase(i, j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(secondCase(i, j) >= MAX){
                MAX = secondCase(i, j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(thirdCase(i, j) >= MAX){
                MAX = thirdCase(i, j);
            }
        }
    }

    cout << MAX << endl;

    return 0;
}