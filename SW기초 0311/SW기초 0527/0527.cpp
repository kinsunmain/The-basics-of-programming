#include <stdio.h>

//#define size 4
//#define size 10

//void calc(int, int, int*, int*, int*, int*);
//void totpay(float*, float*, float*);
//void copy1(char[], char[]);
//void copy2(char*, char*);
void reverse(char*);

void main() {
	//int n1 = 0, n2 = 0;
	//int mul = 0, div = 0, mod = 0, add = 0;
	//printf("n1,n2 : ");
	//scanf_s("%d %d", &n1, &n2);
	//printf("[Before]\tmul:%5d div: %5d mod: %5d add: %5d\n", mul, div, mod, add);
	//calc(n1, n2, &mul, &div, &mod, &add);
	//printf("[After]\t\tmul:%5d div: %5d mod: %5d add: %5d", mul, div, mod, add);


	//float base[size], over[size], total[size];

	//for (int i = 0; i < size; i++) {
	//	printf("Enter base salary for worker %d: ",i+1);
	//	scanf_s("%f", &base[i]);
	//	printf("Enter overtime payment for worker %d: ", i+1);
	//	scanf_s("%f", &over[i]);
	//	printf("\n");
	//}

	//totpay(base, over, total);

	//for (int i = 0; i < size; i++) {
	//	printf("total pay for worker %d = %f\n", i+1, total[i]);
	//}


	//char string1[size] = { 0, };
	//char string2[] = "Hello";
	//char string3[size] = { 0, };
	//char string4[] = "Good Bye";

	//copy1(string1, string2);
	//printf("string1 = %s\n", string1);

	//copy2(string3, string4);
	//printf("string1 = %s\n", string3);


	char a[20];
	printf("Enter the strings: ");
	gets_s(a);
	reverse(a);
}

//void totpay(float* b, float* o, float* t) {
//	for (int i = 0; i < size; i++) {
////		t[i] = b[i] + o[i];
//		*(t + i) = *(b + i) + *(o + i);
//	}
//}

//void calc(int n1, int n2, int* mul, int* div, int* mod, int* add) {
//	*mul = n1 * n2;
//	*div = n1 / n2;
//	*mod = n1 % n2;
//	*add = n1 + n2;
//}

//void copy1(char s1[], char s2[]) {
//	int i = 0;
//	for (i = 0; s2 != '\0', i++) {
//		s1[i] = s2[i];
//	}
//	s1[i] = '\0';
//}	

//void copy2(char s1[], char s2[]) {
//	
//	//case 1
//	//int i = 0;
//	//for (i = 0; s2 != '\0', i++) {
//	//	s1[i] = s2[i];
//	//}
//	//s1[i] = '\0';
//
//	//case 2
//	while (*s2 != NULL)
//		*s1++ = *s2++;
//	*s = '\0';
//
//	//case 3
//	int i;
//	for (i=0;s2[i]!='\0';i++)
//
//}

void reverse(char* a) {
	char b[20];
	char* n = b;
	char* m = a;
	while (*m != '\0'){
		m++;
	}
	m--;
	while (m >= &a[0]) {
		*n++ = *m--;
	}
	*n = '\0';
	printf("%s", b);
}