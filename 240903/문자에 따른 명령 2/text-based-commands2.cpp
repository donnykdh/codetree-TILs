#include <iostream>
#include <string>
using namespace std;

string order;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int curr_dir = 3;

int x = 0;
int y = 0;

int main() {

    cin >> order;

    for(int i = 0; i < (int) order.size(); i++){
        
        char dir = order[i];

        // 반시계방향 90' 회전
        if(dir == 'L'){
            curr_dir = (curr_dir + 3) % 4;
        }

		// 시계방향 90' 회전
        else if(dir == 'R')
            curr_dir = (curr_dir + 1) % 4;
		// 직진
        else {
            x += dx[curr_dir];
            y += dy[curr_dir];
        }

    }

    cout << x << " " << y;
    return 0;
}