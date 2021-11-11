#include <stdio.h>
int main() {
	//int *iptr, ivalue;
	//float *fptr, fvalue;
	//
	//ivalue = 200;
	//fvalue = 314.72;
	//iptr = &ivalue;
	//fptr = &fvalue;

	//*fptr = *fptr - 300.0;
	//*iptr = *iptr + 300;

	//int *ptr1, *ptr2;
	//int small, large;

	//small = 10;
	//large = 10000;
	//ptr1 = &small;
	//ptr2 = &large;
	//small = *ptr2;
	//large = *ptr1;
	//*ptr2 = 100;

	//printf("%d %d", small, large);

	char* p;
	char s[81] = "He drinks coke each day.";
	for (p = s + 10; *p != '\0'; p++) {
		if (*p == 'c') *p = 'C';
		if (*p == 'd') *p = 'D';
		if (*p == 'e') *p = 'E';
		if (*p == ' ') *p = '\n';
	}
	printf("%s\n", s);

}