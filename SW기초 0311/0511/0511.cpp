#include <stdio.h>


//int maximum(int[], int);
//
//int main() {
//	int value[5], i, max;
//
//	printf("Enter 5 numbers\n");
//	for (i = 0; i < 5; ++i) {
//		scanf_s("%d", &value[i]);
//	}
//	max = maximum(value, 5);
//	printf("Maximum value is %d", max);
//}
//
//int maximum(int value[], int n) {
//	int max_value, i;
//
//	max_value = value[0];
//	for (i = 0; i < n; ++i) {
//		if (value[i] > max_value)	max_value = value[i];
//	}
//	return max_value;
//}

//void printArray(int[],int);
//
//int main() {
//	int arr1[3] = { 1,2,3 };
//	int arr2[5] = { 1,2,3,4,5 };
//
//	printArray(arr1, 3);
//	printArray(arr2, 5);
//}
//
//void printArray(int arr[], int n) {
//	int i;
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//void printArray(int[], int);
//void addArray(int[], int, int);
//
//int main() {
//	int arr1[3] = { 1,2,3 };
//	int arr2[5] = { 1,2,3,4,5 };
//
//	printArray(arr1, 3);
//	addArray(arr1, 3, 5);
//	printArray(arr1, 3);
//}
//
//void printArray(int arr[], int n) {
//	int i;
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void addArray(int arr[], int n, int s) {
//	for (int i = 0; i < n; i++) {
//		arr[i] = arr[i] + s;
//	}
//}

//void printArray(int[], int);
//void add2Array(int, int[], int[], int[]);
//
//int main() {
//	int arr1[5] = { 1,2,3,3,3 };
//	int arr2[5] = { 1,2,3,4,5 };
//	int arr3[5] = { 0, };
//
//	printArray(arr1, 5);
//	add2Array(5, arr1, arr2, arr3);
//	printArray(arr3, 5);
//}
//
//void printArray(int arr[], int n) {
//	int i;
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void add2Array(int n, int arr1[], int arr2[], int arr3[]){
//	for (int i = 0; i < n; i++) {
//		arr3[i] = arr1[i] + arr2[i];
//	}
//}

//#define MAX 5
//void mile2km(float []);
//
//void main() {
//	float miles[MAX] = { 10,20,30,40,5 };
//	int i;
//
//	for (i = 0; i< MAX; i++) {
//		printf("%8.2f ", miles[i]);
//	}
//	printf("\n");
//	
//	mile2km(miles);
//	
//	for (i = 0; i < MAX; i++) {
//		printf("%8.2f ", miles[i]);
//	}
//	printf("\n");
//}
//
//
//void mile2km(float mile[]) {
//	for (int i = 0; i < MAX; i++) {
//		mile[i] = mile[i] * 1.6093;
//	}
//}

#define MAX 3
void abs_arr(double[]);

void main() {
	double mile[MAX] = { 38.4, -101.7, -2.1 };
	abs_arr(mile);
}

void abs_arr(double arr[MAX]) {
	for (int i = 0; i < MAX; i++) {
		if (arr[i] < 0) {
			arr[i] = -arr[i];
		}
		printf("%lf\n", arr[i]);
	}

}