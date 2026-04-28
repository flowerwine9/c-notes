#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	double ave = (a + b) / 2.0;
	printf("两数平均值 ：%f", ave);
	return 0;
}