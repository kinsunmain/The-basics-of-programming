#include <stdio.h>
int main() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		printf("\n\n %d´Ü", i);
		printf("\n-----------");

		for (j = 1; j <= 9; j++) {
			printf("\n %d x %d = %d", i, j, i * j);
		}
	}
}