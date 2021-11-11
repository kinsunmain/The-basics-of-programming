#include <stdio.h>
//#define size 10
#define si 5

int main() {
	//float prices[4] = { 16.24,18.98,23.75,19.54 };
	//int i;
	//for (i = 0; i < 4; i++) {
	//	printf("%f\n", prices[i]);
	//}


	//int num[size] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i,total=0;
	//for (i = 0; i < size; i++) {
	//	total = total + num[i];
	//}
	//printf("%d", total);


	//int num1[si], num2[si], i;
	//for (i = 0; i < si; i++) {
	//	scanf_s("%d", &num2[i]);
	//	num1[i] = num2[i];
	//}
	//for (i = 0; i < si; i++) {
	//	printf("num1 : %d num2 : %d\n", num1[i], num2[i]);
	//}


	//int num1[15], num2[5], i;
	//for (i = 0; i < 5; i++) {
	//	scanf_s("%d", &num2[i]);
	//}
	//for (i = 0; i < 10; i++) {
	//	scanf_s("%d", &num1[i]);
	//}
	//for (i = 0; i < 5; i++) {
	//	num1[i + 10] = num2[i];
	//}
	//for (i = 0; i < 15; i++) {
	//	printf("num1 : ");
	//	printf("%d ", num1[i]);
	//}


	//int num1[si], num2[si], i;
	//printf("TYPE num1  : ");
	//for (i = 0; i < si; i++) {
	//	scanf_s("%d", &num1[i]);
	//}
	//printf("TYPE num2  : ");
	//for (i = 0; i < si; i++) {
	//	scanf_s("%d", &num2[i]);
	//}
	//printf("print value: ");
	//for (i = 0; i < si; i++) {
	//	if (num1[i] == num2[i]) printf("0 ");
	//	else if (num1[i] > num2[i]) printf("1 ");
	//	else printf("-1 ");
	//}


	int value1[3][4] = { {8, 16, 9, 52},
						{3, 15, 27, 6},
						{14, 25, 2, 10} };

	int rnum = 3, cnum = 4;
	int rx, cx;
	int min;

	min = value1[0][0];
	for (rx = 0; rx < rnum; rx++) {
		for (cx=0;cx<cnum;cx++){
			if (min > value1[rx][cx])
				min = value1[rx][cx];
		}
	}
	printf("min value = %d\n", min);
}