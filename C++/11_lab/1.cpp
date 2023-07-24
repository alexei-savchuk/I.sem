#include <iostream> 
#include <bitset>
#include <string>

using namespace std;


void first_task_a(int input);
void first_task_b(int input);
void second_task(int input);


int main()
{
	setlocale(LC_CTYPE, "Russian");

	int input;
	cout << "������� ����� �: ";
	cin >> input;


	first_task_a(input);

	first_task_b(input);

	second_task(input);

	return 0;
}


void first_task_a(int input)
{
	bitset<8> bitset_input(input);
	cout << "����� � � �������� ����: " << bitset_input << endl;


	for (int i = 3; i < bitset_input.size(); i++)
	{
		bitset_input[i] = ~bitset_input[i];
	}

	cout << "����� � ����� ��������������: " << bitset_input << endl;
	cout << "����� � ����� ��������������: " << (int)bitset_input.to_ulong() << endl;
}

void first_task_b(int input)
{
	char result[33];

	_itoa_s(input, result, 2);

	cout << "����� � � �������� ����: " << result << endl;
	
	input = input ^ (1 << 3);
	input = input ^ (1 << 4);
	input = input ^ (1 << 5);
	input = input ^ (1 << 6);
	input = input ^ (1 << 7);

	_itoa_s(input, result, 10);

	cout << "����� � � �������� ����: " << result << endl;
}

void second_task(int input)
{	
	bitset<8> bitset_input(input);

	int n, p, m, q;
	cout << "������� ������� P: ";
	cin >> p;

	cout << "������� ���������� ����� N: ";
	cin >> n;

	char changed_byte[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int count_char = 0, i = p - 1; i < bitset_input.size( ) && n != 0; count_char++, i--, n--)
	{
		changed_byte[count_char] = bitset_input[i];

		bitset_input[i] = 0;
	}

	cout << "����� � ����� ��������� ����� � 0: " << bitset_input << endl;


	bitset<8> bitset_input_b(0);

	cout << "������� ������� Q: ";
	cin >> q;

	cout << "������� ���������� ����� M: ";
	cin >> m;
	for (int count_char = 0, i = q - 1; i < bitset_input.size() && m != 0; count_char ++, i++, m--)
	{
		bitset_input_b[i] = changed_byte[count_char];
	}

	cout << "����� B ����� ��������� ����� �� ����� B: " << bitset_input_b << endl;
}