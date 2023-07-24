#include <iostream>
#include <cmath>
using namespace std;


void first_task() {
	const int n = 16, m = 16;
	int A[n][m], rmn = 0, rmx = 10, result_sum = 0, result_prz = 1;
	setlocale(LC_ALL, "ru");
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
			cout << A[i][j] << '\t';
		}
		cout << endl;
	}
	int min_element = 0;
	cout << "изменённая матрица" << endl;
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			if (A[i][j] < min_element) {
				min_element = A[i][j];
			}
			A[i][i] = min_element;
			cout << A[i][j] << '\t';
		}
		cout << endl;
	}
}

void second_task() {
	const int n = 4, m = 4;
	int A[n][m], rmn = 0, rmx = 10, result_sum = 0, result_prz = 1, get_sum_first = 0, get_sum_second = 0;

	setlocale(LC_ALL, "ru");
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
			cout << A[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "_________________________" << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			get_sum_first += A[i][j];
		}
		cout << "summ element in " << i + 1 << " row: " << get_sum_first << endl;
		get_sum_first = 0;
	}
	cout << "_________________________" << endl;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			get_sum_second += A[i][j];
		}
		cout << "summ element in " << j + 1 << " columns: " << get_sum_second << endl;
		get_sum_second = 0;
	}

}

int main() {
	int choice;
	do
	{

		cout << "Выберите вариант работы" << endl;
		cout << "1 - First task" << endl;
		cout << "2 - Second task" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: first_task();
			break;
		case 2: second_task();
		}
	} while (choice != 3);


}

