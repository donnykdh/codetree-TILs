#include <iostream>
using namespace std;

int main() {

	cout << fixed;

	double a = 33.567268;

	cout.precision(4);
	cout << a << endl;

	cout.precision(2);
	cout << a << endl;

	return 0;

}