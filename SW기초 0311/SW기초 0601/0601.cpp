#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* getRandom();

void main() {
	//const char* names[4] = { "Kim","Lee", "Park", "choi" };
	//int i = 0;
	//for (i = 0; i < 4; i++) {
	//	printf("Value of names[%d] = %s\n", i, names[i]);
	//}


	//const char* months[13] = { "","January","February","March","April","May","June","July","August","September","October","November","December" };
	//int m;
	//int d;
	//int y;

	//printf("%s", "Enter a date in the form mm/dd/yyyy: ");
	//scanf_s("%d/%d/%d", &m, &d, &y);
	//printf("The date is: %s %d, %d\n", months[m], d, y);

	

	int* p;
	int i;
	p = getRandom();
	for (i = 0; i < 10; i++) {
		printf("*(p + %d) : %d\n", i, *(p + i));
	}
}
int* getRandom() {
	static int r[10], i;
	srand(time(NULL));
	for (i = 0; i < 10; ++i) {
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);
	}
	return r;
}
