//#include <stdio.h>
//int fivo(int);
//
//void main() {
//	int n;
//
//	printf("Enter number: ");
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", fivo(i));
//	}
//}
//
//int fivo(int n) {
//	if (n == 0)return 0;
//	else if (n == 1) return 1;
//	else return fivo(n - 1) + fivo(n - 2);
//}