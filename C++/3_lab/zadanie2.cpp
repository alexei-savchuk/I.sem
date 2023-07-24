
#include <iostream>
#include <cmath>
int main()
{

	double a = 1.75, b = 4.5 * pow(10, -4), r, y;
	y = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	std::cout << "r=" << r;
	std::cout << "y=" << y;
	{return 0; }
}
