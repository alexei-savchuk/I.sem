#include <iostream>
#include <string>

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

string metod_1(string symbolP, string symbolS, int input, char language) {
	string result_all;
	for (int i = 0; i < symbolP.length(); i++)
	{
		char massP = symbolP[i];
		char massS = symbolS[i];
		string result = get_data_valid_result_char(input, language, massP, massS);
		result_all += result;
	}
	return result_all;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int input;
	string symbolP, symbolS;
	char number;



	do
	{
		cout << "������� �������" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			cout << "������� ������ ���������� �������� � ��������� ����:" << endl;
			cin >> symbolP;
			cout << "������� ������ ���������� �������� � �������� ����:" << endl;
			cin >> symbolS;

			cout << metod_1(symbolP, symbolS, input, english) << endl;
			break;
		case 2:
			cout << "������� ������ ���������� �������� � ��������� ����:" << endl;
			cin >> symbolP;
			cout << "������� ������ ���������� �������� � �������� ����:" << endl;
			cin >> symbolS;

			cout << metod_1(symbolP, symbolS, input, russian) << endl;
			break;
		case 3:
			cout << "������� �����:" << endl;
			cin >> number;

			cout << get_data_valid_result_int(input, number) << endl;
			break;
		}

	} while (input = 99);

	return 0;
}
