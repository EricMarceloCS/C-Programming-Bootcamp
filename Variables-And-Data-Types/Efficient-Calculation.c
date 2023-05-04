#include <stdio.h>
#include <math.h>

int main() {

	double x;

	printf("Enter a number to calculate the power: ");
	scanf("%lf", &x);

	printf("Calclated powers of %lf: %lf, %lf, %lf, %lf\n", x, pow(x, 2), pow(x, 4), pow(x, 6), pow(x, 8));
	return 0;
}
