#include <iostream>
#include <string>
using namespace std;

int m1, d1, m2, d2;
string day;
int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int NumOfDays(int m, int d) {
    // 계산 편의를 위해 월마다 몇 일이 있는지를 적어줍니다. 

    int total_days = 0;
    
    // 1월부터 (m - 1)월 까지는 전부 꽉 채워져 있습니다.
    for(int i = 1; i < m; i++)
        total_days += month[i];
    
    // m월의 경우에는 정확이 d일만 있습니다.
    total_days += d;
    
    return total_days;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> day;
    int ans = 0;
    
    int a;
    for(int i = 0; i < 7; i++){
        if(day == day_of_week[i]){
            a = i;
            break;
        }
    }

    int diff = NumOfDays(m2, d2) - NumOfDays(m1, d1)+1;

    ans = diff / 7;
    //cout << diff << endl;
    if(day == "Mon"){
        ans++;
    }
    if(diff % 7 >= a){
        ans++;
    }
    cout << ans << endl;




    return 0;
}