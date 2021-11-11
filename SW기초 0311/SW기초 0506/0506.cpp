#include <stdio.h>

//int func(int);
//int main() {
//	int i;
//
//	for (i = 1; i <= 10; i++) {
//		printf("%d\n", func(i));
//	}
//}
//
//int func(int i) {
//	return i * i;
//}

//int max(int, int, int);
//int main() {
//	int num1, num2, num3;
//	printf("type 3 integer : ");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("max is %d", max(num1, num2, num3));
//}
//
//int max(int num1, int num2, int num3) {
//	int i;
//	if (num1 > num2 && num1 > num3) return num1;
//	else if (num2 > num1 && num2 > num3) return num2;
//	else if (num3 > num1 && num3 > num2) return num3;
//}

//#include <stdlib.h>
//int main() {
//	int num;
//	double dnum;
//
//	num = atoi("30000");
//	num = num / 1000;
//	printf("num = %d\n", num);
//	dnum = atof("333.99");
//	dnum = dnum / 3.0;
//	printf("dnum = %.2f\n", dnum);
//}


//#include <math.h>
//int main() {
//	int i,num[11],sum=0,d_sum=0,diff;
//	float avrg,dev,d_avrg;
//
//	printf("type 10 integer : ");
//	for (i = 1; i <= 10; i++) {
//		scanf_s("%d", &num[i]);
//		sum = sum + num[i];
//	}
//
//	avrg = sum / 10;
//
//	for (i = 1; i <= 10; i++) {
//		diff = num[i] - avrg;
//		d_sum += pow(diff, 2);
//	}
//	d_avrg = sqrt(d_sum/10);
//	printf("avrege : %f \nstandard deviation : %f", avrg, d_avrg);
//}


//#include <stdlib.h>
//int main() {
//	int i;
//	for (i = 1; i <= 20; i++) {
//		printf("%d ", 1 + (rand() % 6));
//		if (i % 5 == 0) puts("");
//	}
//}


//int factorial(int);
//int main() {
//	int i,num;
//
//	printf("type number : ");
//	scanf_s("%d", &num);
//	printf("%d! = %d", num, factorial(num));
//}
//
//int factorial(int num) {
//	if (num <= 1) return 1;
//	else return (num * factorial(num - 1));
//}


int fibo(int);
int main() {
	int n,i;
	printf("type num : ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		printf("%d ", fibo(i));
	}
}

int fibo(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return (fibo(n - 2) + fibo(n - 1));
}