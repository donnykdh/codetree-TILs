#include <iostream>
using namespace std;

int main() {

	int num[10];
    int sum = 0;
    int idx = 0;
    for(int i = 0; i < 10; i++){
        cin >> num[i];
        if(num[i] >= 250){
            break;
        }
        sum += num[i];
        idx = i + 1;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/idx << endl;
	return 0;

}