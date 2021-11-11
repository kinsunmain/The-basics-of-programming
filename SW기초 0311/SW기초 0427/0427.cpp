#include <stdio.h>
//void tempConvert(char FC, int temp);
//
//int main() {
//	char ForC = 'F';
//	int tmp = 106;
//	tempConvert(ForC, tmp);
//}
//
//void tempConvert(char FC, int temp) {
//	float newTemp;
//	if (FC == 'F')
//		newTemp = (temp - 32) * 5.0 / 9;
//	else
//		newTemp = temp * 9.0 / 3 + 32;
//	printf("new temperature = %f", newTemp);
//}


void comp_num(int n1, int n2);
void main() {
	int N1, N2;
	printf("type two integers: ");
	scanf_s("%d %d", &N1, &N2);
	comp_num(N1, N2);
}

void comp_num(int n1, int n2){
	printf("n1 = %d and n2 = %d", n1, n2);
}