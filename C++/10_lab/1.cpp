#include <iostream>
#include <ctime>
#include <locale>
using namespace std;
const int N = 100;


void var2(int T[], int sz) {
	int k[N]; 
	int temp_index = 0;

	for (int i = 0; i < sz; i++) {
		bool value_exits = false;
		for (int j = 0; j < sz; j++) {
			if (T[i] == k[j]) value_exits = true;
		}

	

		if (value_exits == false) {
			k[temp_index] = T[i];
			temp_index++;
		}
		
			
		
	}
	cout << "количечтво различных элементов:  " << temp_index<< endl;
	for (int j = 0; j < temp_index; j++) {
		cout << k[j] << endl;
	}
	
}
void var1(int T[], int sz) {
	int min = T[0];
	int i;
	for (i = 1; i < sz; i++) {
		if (min > T[i])
			min = T[i];
	}
	cout << "минимальное значение= " << min << endl;

	for (i = 0; i < sz; i++) {
		if (i % 2 == 0) {
			T[i] = min;
		}
		cout << T[i] << endl;
	}
}

void dop1() {
	
}

void main() {
	setlocale(LC_ALL, "russian");
	int i, sz,  T[N], rmn = 0, rmx = 10;
	cout << "¬ведите размер массива ";
	cin >> sz;
	
	cout << "массив T" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		T[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << T[i] << endl;
	}

	if (sz == 0)
	{
		return;
	}

   var2(T, sz);
   var1(T, sz);
   dop1();
}