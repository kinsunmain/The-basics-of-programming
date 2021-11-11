//#include <stdio.h>
//#define SIZE 5
//void modifyArray(int b[], int value);
//void modifyElement(int c[], int index, int value);
//void printArray(int in[]);
//
//void main() {
//	int a[SIZE] = { 0, };
//	int i, index, value;
//	puts("Get input value:");
//	for (i = 0; i < SIZE; i++) scanf_s("%d", &a[i]);
//	puts("Modify Array (mutify all)=============");
//	
//	printf("Get value to change : \n");
//	scanf_s("%d", &value);
//	modifyArray(a, value);
//	printArray(a);
//
//	puts("Modify Element (add value to selected index)=============");
//
//	printf("Get index and value to change :\n");
//	scanf_s("%d %d", &index, &value);
//	modifyElement(a, index, value);
//	printArray(a);
//}
//
//void modifyArray(int b[], int value) {
//	for (int i = 0; i < SIZE; i++) {
//		b[i] *= value;
//	}
//}
//
//void modifyElement(int c[], int index, int value) {
//	for (int i = 0; i < SIZE; i++) {
//		if (i == index)
//			c[i] = c[i] + value;
//	}
//}
//
//void printArray(int in[]) {
//	for (int i = 0; i < SIZE; i++) {
//		printf("%d ", in[i]);
//	}
//	printf("\n");
//}