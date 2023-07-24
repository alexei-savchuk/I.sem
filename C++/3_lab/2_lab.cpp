
#include <iostream>
#include <cmath>
int main()
{
	
	double k = 6, r = 5 * 10 ^ -7, x = 0.095, t,u;
		t = tan(x) + r * (1 - log10(x));
		u = t / (pow(x,3) + 1) / (1 - exp(k - 4));

		std::cout << "t=" << t ;
		std::cout << "u=" << u ;
		{return 0; }

}
