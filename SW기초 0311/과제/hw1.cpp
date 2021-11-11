#include <stdio.h>
int main() {
	float u, a, t, v, s;

	scanf_s("TYPE a : %f", &a);
	scanf_s("TYPE u : %f", &u);
	scanf_s("TYPE t : %f", &t);

	v = u + (a * t);
	s = (u * t) + 0.5 * (a * t * t);

	printf("v : %f\ns : %f", v, s);
}