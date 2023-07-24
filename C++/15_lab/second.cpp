#include <ctime>
#include <iostream>
using namespace std;
int main() {
	int size, rmn = -10, rmx = 10, row_num = 0;
	bool value_exists = false;
	bool do_change = true;
	int** A;
	int** row = 0;

	srand(time(0));

	cout << "Enter size ";
	cin >> size;

	A = new int* [size];
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];
		for (int j = 0; j < size; j++) {
			if (i == 0) A[i][j] = -1;
			else A[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);

			cout << "\t" << A[i][j];
		}
		cout << endl;
	}

	for (int** ptr = A; ptr != A + size; ++ptr) {
		row_num++;
		for (int* it = *ptr; it != *ptr + size; ++it) {
			if (*it > 0) {
				if (row_num == 1) do_change = false;
				else row = ptr - 1;

				value_exists = true;
				break;
			}
		}
		if (value_exists) break;
	}


	if (value_exists)
	{
		cout << "Row number = " << row_num << endl;

		if (do_change)
		{
			for (int* it = *row; it != *row + size; ++it) {
				*it *= -1;
			}
		}

		for (int** ptr = A; ptr != A + size; ++ptr) {
			for (int* it = *ptr; it != *ptr + size; ++it) {
				cout << "\t" << *it;
			}
			cout << endl;
		}
	}

	for (int k = 0; k < size; k++) {
		delete[] A[k];
	}
	delete[] A;

}