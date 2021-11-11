#include <stdio.h>
#define RES 45
int main() {
	int res[RES], fre[11] = { 0, };
	int i;

	for (i = 1; i <= 40; i++) {
		printf("TYPE number(end -1) : ");
		scanf_s("%d", &res[i]);
		fre[res[i]] += 1;
		if (res[i] == -1) break;
	}

	printf("\nFrequency result\n");
	for (i = 0; i < 11; i++) {
		printf("%d %d°³\n", i, fre[i]);
	}
}