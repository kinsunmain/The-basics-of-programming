#include <stdio.h>
int main() {
	//float num, sum = 0, avg = 0;
	//int i;
	//
	//for (i=0;i<5;i++) {
	//	printf("TYPE number :");
	//	scanf_s("%f", &num);
	//	sum = sum + num;
	//}
	//avg = (sum / 5);

	//printf("sum = %f, avg = %f", sum, avg);


	int i, sum = 0;

	for (i = 1; i <= 1000; i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}
	printf("%d", sum);
}