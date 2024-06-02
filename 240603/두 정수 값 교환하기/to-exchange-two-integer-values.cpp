#include <iostream>
using namespace std;

void swap(int* a, int* b);

int main() {
    int n, m;
    cin >> n >> m;
    swap(&n, &m);
    cout << n << " " << m << endl;
    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}