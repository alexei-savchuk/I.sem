#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int   f, a, b;// b ���������� �����
	cout << "������� b: ";
	cin >> b;
	f = b/10;
	a = b % 10;
	if (f == 9 || a==9 )
		cout << "������ 9 ����" << endl;
	else
		cout << "����� 9 ���" << endl;
	if ( f == 1 || a == 1)
		cout << "����� 1 ����" << endl;
	else
		cout << "����� 1 ���";
}
