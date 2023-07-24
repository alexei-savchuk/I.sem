#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int count = 5, n = 1, i;
	double t, z = 0.5, y, x, sum = 0;
	const int size = 5;
	for (int i = 0; i < count; i++)
	{
		cout << "Введите t" << i << endl;
		cin >> t;
		if (t < z)
		{
			z = t;
			n = i;
		}
	}
	cout << "max(t)" << z << endl;
	cout << "n=" << n << endl;
	for (i = 0; i < size; i++) {
		cout << "Введите x" << i << endl;
		cin >> x;
		sum = sum + pow(x, 3);
	}
	y = t * sum;
	cout << "Ответ" << y << endl;
}
