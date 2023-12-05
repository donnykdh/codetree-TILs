#include <iostream>
using namespace std;

int func(int a, int b, int c){
    if( a <= b){
        if( a <= c){
            return a;
        }
        else{
            return c;
        }
    }
    else if( b < a){
        if( b <= c){
            return b;
        }
        else{
            return c;
        }
    }
    
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    cout << func(a, b, c);
    
    return 0;
}