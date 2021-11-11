#include <stdio.h>
int main() {
	//int i, j;
	//for (i = 1; i <= 9; i++) {
	//	if (i == 8) continue;
	//	printf("\n\n %d´Ü", i);
	//	printf("\n-----------");
	//	for (j = 1; j <= 9; j++) {
	//		printf("\n %d x %d = %d", i, j, i * j);
	//	}
	//}


	//int i, j;
	//float grade, sum, total=0;

	//for (i = 0; i < 5; i++) {
	//	sum = 0;
	//	for (j = 0; j < 3; j++) {
	//		printf("TYPE grade : ");
	//		scanf_s("%f", &grade);
	//		sum = sum + grade;
	//	}
	//	printf("student grade avarge : %f\n\n", sum / 3);
	//	total = total + sum;
	//}
	//printf("total avarge : %f", total / 5);

	int count, max = 5;
	float num, total, average;
	count = 0;
	total = 0;

	//do {
	//	printf("Enter a number: ");
	//	scanf_s("%f", &num);
	//	total = total + num;
	//	count = count + 1;
	//} while (count < max);

	//while(count<max) {
	//	printf("Enter a number: ");
	//	scanf_s("%f", &num);
	//	total = total + num;
	//	count = count + 1;
	//}

	//average = total / max;
	//printf("total=%f average=%f\n", total, average);
	//return 0;


	int mstatus;
	printf("input number : ");
	scanf_s("%d", &mstatus);

	switch (mstatus){
	case 1:
		printf("married\n");
		break;
	case 2:
		printf("single\n");
		break;
	case 3:
		printf("divorced");
		break;
	case 4:
		printf("windowed\n");
		break;
	default:
		printf("invalid code\n");
		break;
	}
}