#include <stdio.h>
//int main() {
//	int a[10] = { 2,6,4,8,10,12,89,68,45,37 };
//	int hold;
//	int i, current, start, k;
//	
//	printf("Data items in original order\n");
//
//		for (i = 0;i< 10; ++i) {
//			printf("%4d", a[i]);
//		}
//
//		for (start = 0; start < 10; start++) {
//		int smallest = start;
//		for (current = start + 1; current < 10; current++) {
//			if (a[current] < a[smallest]) smallest = current;
//		
//		}
//
//		hold = a[start];
//		a[start] = a[smallest];
//		a[smallest] = hold;
//	}
//	printf("\nData items in acceding order\n");
//
//	for (k = 0; k < 10; ++k) printf("%4d", a[k]);
//}


//int main() {
//	int a[10] = { 8,1,4,2,5,2,6,3,6,10 };
//	int i,temp,j;
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (j = 0; j < 10; j++) {
//		for (i = 0; i < 10-1-j; i++) {
//			if (a[i] > a[i + 1]) {
//				temp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//	}
//}

void bubble(int[]);
int main() {
	int a[10] = { 8,1,4,2,5,2,6,3,6,10 };
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	bubble(a);

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}

void bubble(int a[10]) {
	int i, j, temp;

	for (j = 0; j < 10; j++) {
		for (i = 0; i < 10-1-j; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}