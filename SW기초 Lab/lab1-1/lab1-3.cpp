#include <stdio.h>
int main() {
	int num[101], i, lag = 0, low=1073741824, cnt=0;
	float avr = 0;

	for (i = 0; i < 100; i++) {
		printf("TYPE an integer: ");
		scanf_s("%d", &num[i]);
		if (num[i] == -1) break;
		if (num[i] > lag) {
			lag = num[i];
		}
		if (num[i] < low) {
			low = num[i];
		}
		avr = avr + num[i];
	}

	printf("largest interger=%d, lowest interger=%d, and average=%f", lag, low, avr / i);
}