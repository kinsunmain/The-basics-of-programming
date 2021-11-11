#include <stdio.h>
int main() {
	//int n1, n2, n3;
	//printf("type three number\n");
	//scanf_s("%d %d %d", &n1, &n2, &n3);
	//if (n1 > n2 && n1 > n3)
	//	printf("num1 is the biggest number");
	//else
	//	printf("num1 is not the biggest number");

	int n1, n2;
	printf("Type twe number\n");
	scanf_s("%d %d", &n1, &n2);

	if ((n1 == n2 * 2) || (n2 == n1 * 2))
		printf("%d", n1 + n2);
	else
		printf("condition not satisfied");
}