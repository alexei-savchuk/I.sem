#include <iostream>
#include <cmath>
using namespace std;


void main() {
	setlocale(LC_CTYPE, "rus");

	float  b = 0.5, m = 8, a = 2.4, j;
	double y, z;
	for (j = 1.7; j < 8; j = j + 2.9)
	{
		y = (m - b) / (sin(a) - exp(a));
		z = (3 * y) + sqrt((a - (4 * j * b) * -1));
		cout << y << endl;
		cout << z << endl;
	}
	cout << "ÇÀÄÀÍÈÅ2:" << endl;
	j = 2;
	while (j < 3)
	{
		y = (m - b) / (sin(a) - exp(a));
		z = (3 * y) + sqrt((a - (4 * j * b) * -1));
		j = j + 0.5;
		cout << y << endl;
		cout << z << endl;
	}

	cout << "ÇÀÄÀÍÈÅ3:" << endl;
	j = 2;
	while (j < 3)
	{
		for (int i = 0; i < 3; i++)
		{
			if (i == 0) { m = 0.4; }
			else if (i == 1) {
				m = -1;
			}
			else m = 1.9;
			y = (m - b) / (sin(a) - exp(a));
			z = (3 * y) + sqrt((a - (4 * j * b) * -1));
			cout << y << endl;
			cout << z << endl;
		}
		j = j + 0.5;
	}

	float n;
	int i;
	for (n = 16, i = 0; n != 1; i++, n /= 2) { cout << n << endl; };
}