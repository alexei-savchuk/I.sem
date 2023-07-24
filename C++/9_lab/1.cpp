#include<iostream>
using namespace std;
double function12_2(double x) {
	double result = pow(x, 3) + 2 * x - 4;
	return result; 
}
// variant 8

double function8_1(double x) {
	double result = pow(x, 3) - 1;
	return result;
}

double function8_2(double x) {
	double result = pow(x, 3) + x - 4;
	return result;//1.379
}

void task12_1()
{
	setlocale(LC_ALL,"Russian");
	double a = 5, b = 11, n = 200, h, s = 0,s1=0, s2=0, x, z;
	h = (b - a) / n;
	x = a;
	for (x; x <= (b - h); x += h)
	{
		s += h * (exp(x) + 6 + exp(x + h) + 6) / 2;
	}
	cout << "Методом трапеции S=" << s << endl;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (int i = 1; i < n; i++)
	{
		s2 += exp(x) + 6;
		x += h;		s1 += exp(x) + 6;
		x += h;
	}
	z = (h / 3) * (exp(a) + 6 + 4 * (exp(a + h) + 6) + 4 * s1 + 2 * s2 + +exp(b) + 6);
	cout << "Методом парабол S=" << z << endl;
}
void task_1() {
	printf("Task 1\n\n");
	double a = 2, b = 3, n = 200, i = 0, S = 0, S1 = 0, S2 = 0, h1 = (b - a) / n, h2 = (b - a) / (n * 2);
	for (float x = a; x <= (b - h1); x += h1) {
		S += h1 / 2 * (function8_1(x) + function8_1(x + h1));
	}
	printf("Trapezoid method\nS: %g", S);
	double x = a + 2 * h2;
	for (int i = 1; i < 2 * n; i++) {
		S2 += function8_1(x);
		x += h2;
		S1 += function8_1(x);
		x += h2;
	}
	S = h2 / 3 * (function8_1(a) + 4 * function8_1(a + h2) + 4 * S1 + 2 * S2 + function8_1(b));
	printf("\nParabola method\nS: %g", S);
}
void task_2() {
	float a = 1, b = 1.5, e = 0.0001, x;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((function8_2(x) * function8_2(a)) <= 0) b = x;
		else a = x;
	}
	printf("\nValue is: %g", x);
}

int main() {
	task12_1();
	task_2();
	task_1();
	return 0;
}

