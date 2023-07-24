#include <iostream>
#include <ctime>
#include <locale>

using namespace std;
void main() {
	setlocale(LC_ALL, "russian");
	const int N = 1000;
	int sz, A[N], B[N], rmn = 0, rmx = 100, a = 0, * pa = &a, b = 0, * pb = &b, c = 0, * pc = &c, K, J = 0, * pJ = &J, Z = 0, * pZ = &Z, R = 0, * pR = &R;
	cout << "Введите размер массива ";
	cin >> sz;
	if (sz > N)
	{
		return;
	}
	cout << "массив A" << endl;

	for (int i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}
	cout << "массив B" << endl;

	for (int i = 0; i < sz; i++)
	{
		B[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << B[i] << endl;
	}

	for (int k = 0; k < sz; k++) {
		if (A[k] == B[k]) {
			*pa = a + 1;
		}
		else if (A[k] > B[k]) {
			*pb = b + 1;
		}
		else if ((A[k] < B[k])) {
			*pc = c + 1;
		}
	}
	
	cout << "A[k] = B[k]:\t" << *pa << endl;
	cout << "A[k] > B[k]:\t" << *pb << endl;
	cout << "A[k] < B[k]:\t" << *pc << endl;

	cout << "ВТОРОЕ ЗАДАНИЕ:" << endl;

	cout << "Введите число K: " << endl;
	cin >> K;
	cout << "элемент массива = К\t" << endl;
	for (int i = 0; i < sz; i++) {
		if (A[i] == K) {
			*pJ = i;
			cout << *pJ << endl;
		}
	}
	cout << "элемент массива > К\t" << endl;
	for (int i = 0; i < sz; i++) {
		if (A[i] > K) {
			*pZ = i;
			cout << *pZ << endl;
		}
	}
	cout << "элемент массива < К\t" << endl;
	for (int i = 0; i < sz; i++) {
		if (A[i] < K) {
			*pR = i;
			cout << *pR << endl;
		}
	}
}