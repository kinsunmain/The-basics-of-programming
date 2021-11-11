#include <stdio.h>
int main() {
	int i, cnt=0;

	for (i = 101; i <= 200; i=i+2) {
		if (i % 3 == 0) continue;
		cnt = cnt + i;
	}

	printf("sum is %d", cnt);
}