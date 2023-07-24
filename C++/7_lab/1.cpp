#include <iostream>
#include <cmath>
using namespace std;
void main() {
	float d = 51.9 * pow(10, -2), c=3.7, x , y ;
	int a = 4, k = 1;
	while (c<5) 
	{
		x = (tan(pow(a, 2) - 1)) / (d + 1);
		if (a * c > 3 * x) { y = (a * k) + d; }
		else if ((3 * x) >= (a * c)) { (cos(a * k))* exp(a + 1); }
		cout << x << endl;
		cout << y << endl;
		c = c + 0.1;
	}

}
