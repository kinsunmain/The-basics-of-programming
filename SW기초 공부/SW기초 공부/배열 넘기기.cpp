//#include <stdio.h>
//#define size 5
//
//void bubble(int[]);
//void selection(int[]);
//void printArray(int[]);
//
//int main() {
//	int i,n[size];
//
//	printf("Enter numbers: ");
//	for (i = 0; i < size; i++) {
//		scanf_s("%d", &n[i]);
//	}
//
//	printf("Bubble sort\n");
//	bubble(n);
//	printf("Selection sort\n");
//	selection(n);
//}
//
//void printArray(int n[]) {
//	for (int i = 0; i < size; i++) {
//		printf("%d ", n[i]);
//	}
//	printf("\n");
//}
//
//void bubble(int n[]) {
//	int j, i, t[size];
//	int temp;
//
//	for (i = 0; i < size; i++) {
//		t[i] = n[i];
//	}
//	
//	for (i = 0; i < size; i++) {
//		for (j = 0; j < size-1; j++) {
//			if (t[j] > t[j + 1]) {
//				temp = t[j];
//				t[j] = t[j + 1];
//				t[j + 1] = temp;
//			}
//		}
//	}
//	printArray(t);
//}
//
//void selection(int n[]) {
//	int i, j, temp,t[size],sm;
//
//	for (i = 0; i < size; i++) {
//		t[i] = n[i];
//	}
//
//	for (i = 0; i < size; i++) {
//		sm = i;
//		for (j = i; j < size; j++) {
//			if (t[j] < t[sm]) {
//				sm = j;
//			}
//		}
//		temp = t[sm];
//		t[sm] = t[i];
//		t[i] = temp;
//	}
//	printArray(t);
//
//}