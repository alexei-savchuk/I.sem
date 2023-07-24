#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i;
	double p, t, z = 9, y, x, sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите x" << i << endl;
		cin >> t;
		if (t > z)
		{
			z = t;
		}
	}
	cout << "max(x)= " << z << endl;
		for (i = 0; i < 5; i++) {
			cout << "Введите x" << i << endl;
			cin >> x;
			sum = sum + (pow(x, 2) + 1);
		}
		y = sum;
		p = y + z;
		cout << "Ответ p = " << p << endl;
		cout << "Ответ y = " << y << endl;
	}
	