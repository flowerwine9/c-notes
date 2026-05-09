#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		sum += i+1;
	}
	printf("sum = %d", sum);
	return 0;
}