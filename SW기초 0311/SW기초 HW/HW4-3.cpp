#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	float x1=0, x2=0,q=0;

	printf("The coefficients of ax^2+bx+c=0 are a,b,and c\n");
	printf("Enter values of a,b and c:");

	scanf_s("%d %d %d", &a, &b, &c);

	q = sqrt(b * b - 4 * a * c);

	x1 = (-b + q) /2*a;
	x2 = (-b - q) / 2*a;


	printf("\n");
	if (isnan(q)) {
		printf("Roots are imaginary");
	}
	else if (x1 == x2) {
		printf("Two real and equal roots\n");
		printf("Roots are %f and %f", x1, x2);
	}
	else {
		printf("Two real and distinct roots\n");
		printf("Roots are %f and %f", x1, x2);
	}
	printf("\n");

}