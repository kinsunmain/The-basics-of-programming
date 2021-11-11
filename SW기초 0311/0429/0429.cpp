#include <stdio.h>

//void odd_even(int);
//
//int main() {
//	int num;
//	printf("type num : ");
//	scanf_s("%d", &num);
//
//	odd_even(num);
//}
//
//void odd_even(int num) {
//	if (num % 2 == 0) printf("%d is even", num);
//	else printf("%d is odd", num);
//}

//void comp_num(int, int);
//int main() {
//	int num1, num2;
//
//	printf("type 2 num : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	comp_num(num1, num2);
//}
//
//void comp_num(int num1,int num2) {
//	if (num1 == num2) printf("%d", num1);
//	else if (num1 > num2) printf("%d %d", num2, num1);
//	else printf("%d %d", num1, num2);
//}

//void fibonacci(int);
//
//int main() {
//	int num;
//
//
//	printf("type num : ");
//	scanf_s("%d", &num);
//
//	fibonacci(num);
//}
//
//void fibonacci(int num) {
//	int i = 1, fibo[100] = { 0,1, };
//	for (i = 2; i <= num; i++) {
//		fibo[i] = fibo[i - 2] + fibo[i - 1];
//	}
//
//	for (i = 0; i <= num; i++) {
//		printf("%d ", fibo[i]);
//	}
//}

int find_max(int, int, int);

int main() {
	int num1, num2, num3;
	printf("type three number : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("max : %d", find_max(num1, num2, num3));
}

int find_max(int num1, int num2, int num3) {
	int max;
	if (num2 > max) max = num2;
	if (num3 > max) max = num3;
	return max;
}