
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
	double x = 4.9, y = 8.4;
	double hasil = pow(x, y);

	printf("x = %.21f\n", x);
	printf("y = %.21f\n\n", y);
	printf("x ^ y = %.2lf", hasil);

	_getch();
	return 0;
}
