#include <iostream>
using namespace std;

int n;
int arr[20][20];
int sum = 0;
int k1, k2;
int MAX = 0;

bool range(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < n;
}

void Fourth(int i, int j,int k1, int k2){
    if(range((i+k2), (j+k2))){
    for(int a = 1; a <= k2; a++){
       
            sum += arr[i + a][j + a];
    }
    
    //return sum;
    }
}

void Third(int i, int j, int k1, int k2){
    if(range((i+k1), (j-k1))){
    for(int a = 1; a <= k1; a++){
        
            sum += arr[i + a][j - a];
    }
    Fourth((i+k1), (j-k1), k1, k2);
    }
}

void Second(int i, int j, int k1, int k2){
    if(range((i-k2), (j-k2))){

    for(int a = 1; a <= k2; a++){
            sum += arr[i - a][j - a];
    }
    Third((i-k2), (j-k2), k1, k2);
    }
}

void First(int i, int j, int k1, int k2){
    sum = 0;
    if(range((i-k1), (j+k1))){
        for(int a = 1; a <= k1; a++){
            
            sum += arr[i - a][j + a];
        }
        Second((i-k1), (j+k1), k1, k2);
    }
}





int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // 시작점
    int q;
    int w;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            //MAX = 0;
            sum = 0;
            for(k1 = 1; k1 < n; k1++){
                for(k2 = 1; k2 < n; k2++){
                    First(i, j, k1, k2);
                    if(sum >= MAX){
                MAX = sum;
                //q=i;
                //w=j;
            }
                }
                //cout << sum <<endl;
            }
            
        }
    }
    //cout << q << endl << w << endl;
    //cout << k1 << endl << k2 <<endl;
    cout << MAX <<endl;

    
    return 0;
}