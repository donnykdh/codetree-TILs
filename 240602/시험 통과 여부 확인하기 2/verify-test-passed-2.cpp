#include <iostream>

using namespace std;

int main() {
    // 학생 수 n 입력받기
    int n;
    cin >> n;

    int pass_people = 0;

    for(int i = 0; i < n; i++) {
        int arr[4];
        int sum = 0;

        for(int j = 0; j < 4; j++) {
            cin >> arr[j];
        }

        for(int j = 0; j < 4; j++) {
            sum += arr[j];
        }

        double avg = (double)sum / 4;

        if(avg >= 60) {
            cout << "pass" << endl;
            pass_people++;
        }
        else
            cout << "fail" << endl;
    }

    cout << pass_people;

    return 0;
}