#include <iostream>
#include <cmath>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	double t = 0.45, i, x, q, sum=0;
	for (int i = 0; i < 6; i++)
	{
		cout << "Введите x" << i << endl;
		cin >> x;
		sum = sum + ((x + 1) / x);
	}
	q = t + sum;
	cout << "Ответ: q= " << q << endl;
}

