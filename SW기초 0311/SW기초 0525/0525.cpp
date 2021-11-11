#include <stdio.h>
#define size 4
int main() {
	//int arr[3] = { 0,1,2 };

	//printf("배열의 이름:%p\n", arr);
	//printf("첫번째 요소:%p\n", &arr[0]);
	//printf("두번째 요소:%p\n", &arr[1]);
	//printf("세번째 요소:%p\n", &arr[2]);
	//printf("\n");
	//int* p;
	//p = arr;
	//printf("배열의 이름:%p\n", p);
	//printf("첫번째 요소:%p\n", (p+0));
	//printf("두번째 요소:%p\n", (p + 1));
	//printf("세번째 요소:%p\n", (p + 2));

	//int b[] = { 10,20,30,40 };
	//int* bPtr = b;

	//for (int i = 0; i < size; i++) {
	//	printf("b[%d] = %d\n", i, b[i]);
	//	printf("*(b+%d) = %d\n", i, *(b + i));
	//	printf("bPtr[%d] = %d\n", i, bPtr[i]);
	//	printf("*(bPtr+%d) = %d\n", i, *(bPtr + i));
	//}

	//void newVal(float*);
	//float testval;

	//printf("\nEnter a number: ");
	//scanf_s("%f", &testval);

	//newVal(&testval);

	//printf("%f", testval);

	//void newVal(float);
	//float testval;

	//printf("\nEnter a number: ");
	//scanf_s("%f", &testval);

	//newVal(testval);

	//printf("%f", testval);



	//void exchange(int* ptr1, int* ptr2);
	//int n1, n2;
	//printf("n1 n2: ");
	//scanf_s("%d %d", &n1, &n2);

	//printf("Before = n1:%d, n2:%d\n", n1, n2);
	//exchange(&n1, &n2);
	//printf("after = n1:%d, n2:%d\n", n1, n2);

	void minmax(int, int, int*,int*);
	int n1, n2,min=0,max=0;

	printf("Enter n1, n2: ");
	scanf_s("%d %d", &n1, &n2);
	printf("[Before]\tn1: %d,\tn2: %d\tmin: %d,\tmax: %d\n", n1, n2, min, max);
	minmax(n1, n2, &min, &max);
	printf("[Before]\tn1: %d,\tn2: %d\tmin: %d,\tmax: %d", n1, n2, min, max);
}

//void newVal(float* num) {
//	*num = *num + 20.2;
//}

//void newVal(float num) {
//	num = num + 20.2;
//}

//void exchange(int* p, int* q) {
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}

void minmax(int n1, int n2, int* p, int* q) {
	if (n1 > n2) {
		*p = n2;
		*q = n1;
	}
	else {
		*p = n1;
		*q = n2;
	}
}