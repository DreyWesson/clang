#include <stdio.h>
#include <math.h>

int main() {
	double a;
	double b;
	double c;

	printf("Enter the value of A: \n");
	scanf("%lf", &a);

	printf("Enter the value of B: \n");
	scanf("%lf", &b);
	c = pow(a, 2) + pow(b, 2);
	c = sqrt(c);
	printf("The value of C is %.2f\n", c);
	return 0;
}