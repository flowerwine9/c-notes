#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	int sum = 1;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		sum *= i;

	}
	printf("%dµÄ½×³ËÊÇ%d", n, sum);
	return 0;
}