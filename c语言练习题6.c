#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1;i < n;i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			sum += i;
		}
	}
	printf("%f", sqrt(sum));
	return 0;
}