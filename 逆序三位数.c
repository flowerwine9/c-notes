#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	int ge = num % 10;
	int shi = (num / 10) % 10;
	int bai = num / 100;
	printf("%d",ge*100+shi*10+bai);
	return 0;
}