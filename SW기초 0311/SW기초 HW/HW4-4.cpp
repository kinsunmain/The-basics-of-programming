#include <stdio.h>
int func(int);
int main() {
	int num;
	int i,sum=0;

	printf("Enter a number between 1 and 9999: ");
	scanf_s("%d", &num);
	

	printf("\nThe sum of the digits of the number %d is %d",num,func(num));
	

}

int func(int num) {
	int a, b, c, d;

		a = (num / 1000) % 10;
		b = (num / 100) % 10;
		c = (num / 10) % 10;
		d = num % 10;
		
	return a + b + c + d;
}