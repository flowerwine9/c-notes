#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	int n = 0;
	scanf("%d", &num);
	while (num != 0) {
		num /= 10;
		n++;
	}
	printf("%d", n);
	return 0;
}