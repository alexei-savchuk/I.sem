#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int k;
	printf(" �� ������ ��������� � ����������? (1-��, 2-���)");
	cin >> k;
	switch (k)
	{
	case 1: printf("�� ������ ������ (1-����� ������� �� � ��������, 2-�������� ���-�����, 3-�������� �����)");
		cin >> k;
		switch (k)
		{
		case 1: printf("������� ����� �������"); break;
		case 2: printf("����� ���������� ������"); break;
		case 3: printf("�� ����� ������� �������?"); break;
		}
		break;
	case 2: printf("�������� ��� ���"); break;
	default: printf("������������ �������"); break;
	case 3 printf(""); break;
	default: printf("������������ �������"); break;
	}
	return 0;
}
