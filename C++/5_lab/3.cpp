#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float x, y, z, mn, mx;
	printf("¬ведите x "); scanf_s("%f", &x);
	printf("¬ведите y "); scanf_s("%f", &y);
	printf("¬ведите z "); scanf_s("%f", &z);
	if (((x + y + z)/2) < (x * y * z))
		mn = ((x + y + z) / 2);
	else
		mn = (x * y * z);
	if ((x * y) > y)
		mx = (x * y);
	else
		mx = y;
	printf("min((x + y + z)/2, xyz) + max(xy,y) = %f \n", mn + mx);
}
