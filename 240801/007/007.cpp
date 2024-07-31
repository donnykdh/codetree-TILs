#include <iostream>
#include <string>

using namespace std;

class Spy {
    public:
        string secret_code;
        char meeting_point;
        int time;
        Spy(string secret_code, char meeting_point, int time) {
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->time = time;
        }
};

int main(){

    string s_code;
    char m_point;
    int time;
    cin >> s_code >> m_point >> time;
    

    Spy s = Spy(s_code, m_point, time);

    cout << "secret code : " << s.secret_code << endl;
    cout << "meeting point : " << s.meeting_point << endl;
    cout << "time : " << s.time << endl;
    return 0;
}