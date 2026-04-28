#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	int b;
	scanf("%d %d", &a, &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %f\n", a*1.0 / b);
	return 0;
}