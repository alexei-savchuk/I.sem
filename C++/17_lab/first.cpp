#include <iostream>
#include <ctime>
#include <locale>
using namespace std;
const int N = 100;
void first() {
	int a = 0, * pa = &a;
	setlocale(LC_ALL, "russian");
	int i, sz, T[N], rmn = -10, rmx = 10;
	cout << "Введите размер массива: ";
	cin >> sz;

	cout << "массив T" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		T[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << T[i] << endl;
	}
	for (int i = 0; i < sz; i += 2) {
		if (T[i] < 0) {
			*pa += 1;
		}
	}
	cout << "количество отрицательных чисел: " << *pa << endl;
}
void second() {
	bool test = false;
	const int n = 4, m = 4;
	int A[n][m], rmn = -3, rmx = 10, g = 0, *pg = &g;
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


	for (int i = 0; i < n; i++)
	{
		if (test == true) {
			break;
		}
			for (int j = 0; j < m; j++)
			{
				if (A[i][j] < 0) {
					test = true;
					*pg = i;
					cout << "number row: " << *pg + 1 << endl;
					break;
				}
			}
	}
	cout << "________________________________" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j==*pg) {
				A[i][j] /= 2;
			}
			cout << A[i][j] << '\t';
		}
		cout << endl;
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
		case 1: first();
			break;
		case 2: second();

		}
	} while (choice != 3);


}