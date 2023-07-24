#include <iostream>
#include <string>
#include <sstream>

using namespace std;

enum language
{
	english = 'E',
	russian = 'R'
};
bool is_input_data_valid(char lang, char symbolP, char symbolS)
{
	if (english)
	{
		if (((int)symbolP >= (int)'A' && (int)symbolP <= (int)'Z') ? true : false &&
			((int)symbolS >= (int)'a' && (int)symbolS <= (int)'z') ? true : false) return true;
	}
	else if (russian)
	{
		if (((int)symbolP >= (int)'�' && (int)symbolP <= (int)'�') ? true : false &&
			((int)symbolS >= (int)'�' && (int)symbolS <= (int)'�') ? true : false) return true;
	}
}

string get_data_valid_result_char(int var, char lang, char symbolP, char symbolS)
{
	if (var == 1)
	{
		if (!is_input_data_valid(lang, symbolP, symbolS)) return "�� ����� �������� ������";
	}
	else if (var == 2)
	{
		if (!is_input_data_valid(lang, symbolP, symbolS)) return "�� ����� �������� ������";
	}

	return to_string((int)symbolS - (int)symbolP);
}

string get_data_valid_result_int(int var, char number)
{
	if (var == 3)
	{
		if (number >= (char)'0' && number <= (char)'9') return to_string((int)number);
		else return "�� ����� �������� ������";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	string input_string;
	int input = 0;
	char symbolP, symbolS, number;
	int enter_counter = 0;

	do
	{
		cout << "������� �������" << endl;
		getline(cin, input_string);
		if (input_string.empty())
		{
			if (enter_counter == 5)
			{	
				break;
			}
			enter_counter += 1;
			continue;
		}

		stringstream string_temp;
		string_temp << input_string;
		string_temp >> input;

		switch (input)
		{
		case 1:
			cout << "������� ������ ���������� �������� � ��������� ����:" << endl;
			cin >> symbolP;
			cout << "������� ������ ���������� �������� � �������� ����:" << endl;
			cin >> symbolS;

			if (!((((int)symbolP >= (int)'A' && (int)symbolP <= (int)'Z') ? true : false &&
				((int)symbolS >= (int)'a' && (int)symbolS <= (int)'z') ? true : false)))

			{
				cout << "�� ����� �������� ������" << endl;
			}
			else {
				cout << "������� �������� �����: " << to_string((int)symbolS - (int)symbolP) << endl;
			}
			break;

		case 2:
			cout << "������� ������ �������� �������� � ��������� ����:" << endl;
			cin >> symbolP;
			cout << "������� ������ �������� �������� � �������� ����:" << endl;
			cin >> symbolS;


			if (!((((int)symbolP >= (int)'�' && (int)symbolP <= (int)'�') ? true : false &&
				((int)symbolS >= (int)'�' && (int)symbolS <= (int)'�') ? true : false)))
			{
				cout << "�� ����� �������� ������" << endl;
			}
			else {
				cout << "������� �������� �����: " << to_string((int)symbolS - (int)symbolP) << endl;
			}
			break;

		case 3:
			cout << "������� �����:" << endl;
			cin >> number;

			if (!(number >= (char)'0' && number <= (char)'9'))
			{
				cout << "�� ����� �������� ������" << endl;

			}
			else {
				cout << "��� �������: " << to_string((int)number) << endl;
			}
			break;

		}
	} while (input != 99);

	return 0;
}
