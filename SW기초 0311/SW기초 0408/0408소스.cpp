#include <stdio.h>
#include <string.h>
int main() {
	//char str[81];
	//int i;

	//printf("type string : ");
	//gets_s(str);
	//for (i = 0; str[i] != '\0'; i++) { //대문자 -> 소문자 변환
	//	if (str[i] <= 90 && str[i] >= 65) {
	//		str[i] = str[i] + 32;
	//	}
	//}

	////for (i = 0; str[i] != '\0'; i++) { //소문자 -> 대문자 변환
	////	if (str[i] >= 97 && str[i] <= 122) {
	////		str[i] = str[i] - 32;
	////	}
	////}
	//puts(str);


	//char str[81];
	//strcpy(str, "these ");
	//strcat(str, "strings ");
	//strcat(str, "are ");
	//strcat(str, "concatenated.");
	//puts(str);
	//printf("\nstr has %d characters\n", strlen(str));


	//char str1[81], str2[81];
	//gets_s(str1);
	//gets_s(str2);
	//printf("\nresult of comparing str1 and str2 = %d characters\n", strcmp(str1, str2));


	//char a[] = "happy birthday to you";
	//char b[25];
	//char c[15];

	//printf("String a: %s, String b(Copied): %s \n", a, strcpy(b, a));

	//strncpy(c, a, 13);
	//c[13] = NULL;
	//printf("String c: %s \n", c);

	char a[100] = "happy ";
	char b[100] = "birthday to you";

	printf("String append: %s\n", strcat(a, b));

	char c[100] = "happy ";
	char d[100] = "happy ";
	printf("String compare: %d\n", strcmp(a, b));
	
}