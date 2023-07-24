#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int   f, a, b;// b двузначное число
	cout << "Введите b: ";
	cin >> b;
	f = b/10;
	a = b % 10;
	if (f == 9 || a==9 )
		cout << "числло 9 есть" << endl;
	else
		cout << "числа 9 нет" << endl;
	if ( f == 1 || a == 1)
		cout << "число 1 есть" << endl;
	else
		cout << "числа 1 нет";
}
