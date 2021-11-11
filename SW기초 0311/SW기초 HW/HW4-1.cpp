#include <stdio.h>

void func(int, int);

int main() {
	int i, j,r,c;

	printf("Enter sides: ");
	scanf_s("%d %d", &r, &c);
	printf("\n");
	func(r, c);
}

void func(int r, int c) {
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("*");
		}
		printf("\n");
	}
}