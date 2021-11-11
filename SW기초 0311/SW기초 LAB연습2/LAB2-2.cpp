#include <stdio.h>
#define RES 11
int main() {
	int res[RES];
	int i,j;

	for (i = 0; i < 10; i++) {
		printf("TYPE number : ");
		scanf_s("%d", &res[i]);
	}

	printf("\nElement\t\tValue\t\tHistogram\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t\t%d\t\t", i, res[i]);
		for (j = 1; j <= res[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
}