#include <stdio.h>
int main() {
	//char string[81], c;
	//int i=0, cnt = 0;

	//printf("type string : ");

	//while(1) {
	//	c = getchar();
	//	if (c == '\n' || i == 80) break;
	//	string[i] = c;
	//	i++;
	//}

	//for (i = 0; i < 80; i++) {
	//	if (string[i] == '\0') break;
	//	cnt += 1;
	//}
	//printf("count : %d", cnt);

	//char  message[100];
	//int    i;
	//i = 0;

	//printf("enter a string : \n");
	//gets_s(message);

	//while (message[i] != '\0') {
	//	i = i + 1;
	//}
	//printf("number of characters : % d\n", i);


	//char string1[81], string2[81];
	//int i=0;

	//printf("type string : ");
	//gets_s(string2);

	//for (i = 0; i < 80; i++) {
	//	string1[i] = string2[i];
	//}

	//while (string2[i]) 

	//while (string2[i] != '\0') 
	//{
	//	string1[i] = string2[i];
	//	i++;
	//}

	//while (string1[i] = string2[i]) {
	//	i++;
	//}

	//string1[i] = '\0';

	//printf("string1 : ");
	//puts(string1);
	//printf("string2 : ");
	//puts(string2);


	//char string1[81], string2[81];
	//int i = 0, t = 1;

	//printf("type string1 : ");
	//gets_s(string1);
	//printf("type string2 : ");
	//gets_s(string2);

	////while (t == 0) {     //첫문자만 비교
	////	if (string1[i] != string2[i]){
	////		t = 1;
	////	}
	////	i++;
	////}

	//while (string2[i]) {
	//	if (string1[i] != string2[i]) {
	//		t = -1;
	//		break;
	//	}
	//	i++;
	//}

	//printf("result : %d", t);


	char string1[81], string2[81];
	int i=0,j=0;

	printf("string1 : ");
	gets_s(string1);
	printf("string2 : ");
	gets_s(string2);

	while (string1[j]) {
		j++;
	}
	printf("j : %d\n", j);

	while (string2[i]) {
		string1[j] = string2[i];
		j++;
		i++;
	}
	string1[j] = '\0';
	puts(string1);
}