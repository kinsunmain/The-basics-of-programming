#include <stdio.h>
int main() {
	float h, q, d, n, p;
	float cnt = 0;

	printf("Enter number of coins (Half-dollars, Auaters, Dimes, nickels, pennies)\n");
	scanf_s("%f %f %f %f %f", &h, &q, &d, &n, &p);

	h = h / 2;
	q = q / 4;
	d = d / 10;
	n = n / 20;
	p = p / 100;
	cnt = h + q + d + n + q;

	printf("\nYour total is %f dollors", cnt);
}