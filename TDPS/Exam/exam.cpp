#include <iostream>
using namespace std;
int a, b, c;

int getMul() {
	c = a * b;
	cout << "result a*b=" << c << endl;
	return 0;
}

int main() {
	cout << "input a:" << endl;
	cin >> a;
	cout << "input b:" << endl;
	cin >> b;
	getMul();
}