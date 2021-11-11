#include <stdio.h>

//int sum(int);
//
//void main() {
//	int size;
//	printf("type the iteration number :");
//	scanf_s("%d", &size);
//	printf("\nresult : %d", sum(size));
//}
//
//int sum(int size) {
//	int n, total=0,i;
//
//	for (i = 1; i <= size; i++) {
//		printf("type integer: ");
//		scanf_s("%d", &n);
//		if (n < 3000)	
//			total += n;
//		if (total > 200000) 
//			break;
//	}
//	return total;
//}


//float volume(int, int);
//
//void main() {
//	int rad, height;
//
//	printf("type radius, height : ");
//	scanf_s("%d %d", &rad, &height);
//	printf("volume is %f", volume(rad,height));
//}
//
//float volume(int rad, int height) {
//	return rad * rad * height * 3.14;
//}

//void func1(int, int);
//void func2(int, int);
//
//void main() {
//	int n1, n2;
//	printf("type two number :");
//	scanf_s("%d %d",&n1,&n2);
//	func1(n1, n2);
//	func2(n1, n2);
//}
//
//void func1(int n1, int n2) {
//	if (n1 > n2) printf("n1>n2 bigger is %d\n", n1);
//	else if (n2 > n1) printf("n1<n2 bigger is %d\n", n2);
//	else if (n1 == n2) printf("n1==n2 %d\n", n1);
//}
//
//void func2(int n1, int n2) {
//	if (n1 > n2) printf("n1>n2 smaller is %d\n", n2);
//	else if (n2 > n1) printf("n1<n2 smaller is %d\n", n1);
//	else if (n1 == n2) printf("n1==n2 %d\n", n2);
//}

//int func1(int, int);
//int func2(int, int);
//int func3(int, int);
//
//void main() {
//	int n1, n2,p,result;
//	printf("type two number : ");
//	scanf_s("%d %d", &n1, &n2);
//	printf("type p value for the power of p : ");
//	scanf_s("%d", &p);
//	result = func1(n1, n2, p);
//	printf("result : %d", result);
//}
//
//int func1(int n1, int n2, int p) {
//	int big, result;
//	big = func2(n1, n2);
//	result = func3(big, p);
//	return result;
//}
//
//int func2(int n1, int n2) {
//	if (n1 > n2) return n1;
//	else return n2;
//}
//
//int func3(int n1, int n2) {
//	int result = n2;
//
//	for (int i = 0; i < n1; i++) {
//		if (i == 0) continue;
//		result *= n2;
//	}
//	return result;
//}

//int num1;
//void newfun();
//void main() {
//	int num2;
//	num1 = 10;
//	num2 = 20;
//	newfun();
//	printf("%d %d", num1, num2);
//}
//
//void newfun() {
//	int num2 = 30;
//	num1 = 40;
//}


int n1, n2;
void exchange();
void main() {
	printf("type two number : ");
	scanf_s("%d %d", &n1, &n2);
	printf("n1 = %d, n2 = %d\n", n1, n2);
	exchange();
	printf("n1 = %d, n2 = %d", n1, n2);
}

void exchange() {
	int temp=0;
	temp = n1;
	n1 = n2;
	n2 = temp;
}