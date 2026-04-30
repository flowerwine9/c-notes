#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int sign = 1 ;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		
			sum += 1.0 / i * sign;
			sign = -sign;
	}
	printf("ºÍÎª%f", sum);
	return 0;
}