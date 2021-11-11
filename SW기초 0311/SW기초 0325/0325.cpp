#include <stdio.h>
int main() {
	//int i, grade[10], total=0;
	//
	//for (i = 0; i < 10; i++) {
	//	printf("TYPE a grade: ");
	//	scanf_s("%d", &grade[i]);
	//	total += grade[i];
	//}
	//printf("result=%d\n", total);



	//int i, value[5], max = 0;

	//for (i = 0; i < 5; i++) {
	//	printf("type number : ");
	//	scanf_s("%d", &value[i]);
	//	if (value[i] > max) {
	//		max = value[i];
	//	}
	//}
	//printf("result : %d", max);



	int i, grade[5], lowest = 99999,total=0;

	for (i = 0; i < 5; i++) {
		printf("type grade: ");
		scanf_s("%d", &grade[i]);
		if (grade[i] < lowest) {
			lowest = grade[i];
		}
		total = total + grade[i];
	}
	printf("lowest : %d, average : %f", lowest, (float)total / 5);
}