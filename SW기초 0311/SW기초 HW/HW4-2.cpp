#include <stdio.h>

void func(int, int, char);
int main() {
	int i, j,r,c;
	char a;

	printf("Enter a charcater to fill the rectangle: ");
	scanf_s("%c", &a);

	printf("\nEnter sides: ");
	scanf_s("%d %d", &r, &c);
	printf("\n");
	func(r, c, a);
}

void func(int r, int c, char a) {
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%c ", a);
		}
		printf("\n");
	}
}