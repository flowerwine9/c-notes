#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  main() {
	int fz = 2;
	int fm = 1;
	double sum = fz/fm;
	int n;
	scanf("%d", &n);

	while (n != 1) {
		int t = fm;
		fm = fz;
		fz += t;
		

		sum += fz*1.0 / fm;
		n--;
	}
	printf("%f", sum);
	return 0;
}