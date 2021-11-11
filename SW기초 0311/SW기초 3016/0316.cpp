#include <stdio.h>
void main() {
	//float num1, num2, approx;

	//scanf_s("%f %f", &num1, &num2);
	//if (num1 - num2 < .001 || num2 - num1 < .001) {
	//	approx = 0.0;
	//}
	//else
	//	approx = (num1 - num2) / 2.0;

	//printf("%f", approx);

	//int num,i,evensum=0,oddsum=0;

	//for (i = 1; i <= 5; i++) {
	//	scanf_s("%d", &num);
	//	if (num % 2 == 0) {
	//		evensum = evensum + num;
	//	}
	//	else
	//		oddsum = oddsum + num;
	//}
	//printf("%d %d", evensum,oddsum);

	int a = 100, num, result;
	printf("type num :");
	scanf_s("%d", &num);
	result = (num > a) ? 100000 : -100000;
	printf("%d", result);
}