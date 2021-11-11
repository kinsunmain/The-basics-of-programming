//#include <stdio.h>
//int main() {
//	int i, j, n, m,r,k,t=1,a;
//
//	printf("TYPE N,M : ");
//	scanf_s("%d %d", &n, &m);
//
//	r = (n / m)+1;
//
//	for (k = 1; k <= r; k++) {
//		for (i = 1; i <= n; i++) {
//			for (j=t; j <= m; j++) {
//				printf("%d x %d = %d\t", j, i, i * j);
//			}
//			printf("\n");
//		}
//		printf("\n");
//		t = m+1;
//		a = (9 % m);
//		if (a == 0) m = m + m;
//
//		else {
//			m = m + a;
//			if (m > n) m = n;
//		}
//	}
//}