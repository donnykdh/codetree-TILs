#include <iostream>
using namespace std;

int main() {
    int n, q;
    int arr[100];
    int num;    // 문제 유형 번호
    int a, b, s, e;


    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= q; i++){
        cin >> num;
        if (num == 1){
            cin >> a;
            cout << arr[a - 1] << endl;
        }else if (num == 2){
            int go = 0;
            cin >> b;
            for(int j = 0; j < n; j++){
                if (arr[j] == b){
                    cout << j + 1 << endl;
                    go = 1;
                    break;
                }
            }
            if (go == 0){
                cout << 0 << endl;
            }
        }else if (num == 3){
            cin >> s >> e;
            for (int j = s; j <= e; j++){
                cout << arr[j - 1] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}