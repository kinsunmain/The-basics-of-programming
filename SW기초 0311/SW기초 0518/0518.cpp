#include <stdio.h>
#define size 10

void median(int[]);
void mode(int[]);
void bubble(int[]);
void printArray(int[]);
void mean(int[]);

int main() {
	int a[size] = { 6,7,8,9,8,7,8,9,8,9 };
	
	printArray(a);
	bubble(a);
	printf("The sorted array is : ");
	printArray(a);
	printf("\n");
	median(a);
	mode(a);
	mean(a);

}

void bubble(int a[]) {
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

void median(int a[size]) {
	printf("The median is %d\n\n", a[size / 2]);
}

void printArray(int arr[]) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

void mode(int a[]) {
	int i, j,max=0;
	int frq[size] = { 0, };

	for (i = 0; i < size; i++) {
		frq[a[i]]++;
	}

	for (i = 1; i < size; i++) {
		printf("\t %d \t %d \t", i, frq[i]);
		if (frq[i] != 0) {
			for (j = 1; j <= frq[i]; j++) {
				printf("*");
			}
		}
		printf("\n");
	}
	
	for (i = 1; i < size; i++) {
		if (max < frq[i]) max = frq[i];
	}

	printf("The mode is %d(occurred %d times)\n\n", a[max], max);

}


void mean(int a[]) {
	int i,total=0;

	for (i = 0; i < size; i++) {
		total += a[i];
	}

	printf("The mean is %f\n\n", (float)total / size);
}