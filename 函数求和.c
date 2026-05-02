#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  sum(int begin, int end) {
	int sum = 0;
	for (int i = begin;i <= end;i++) {
		sum += i;
	}
	//printf("%d", sum);
	return sum;
}
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	sum(m, n);
	printf("%d", sum(m, n));
	return 0;
}