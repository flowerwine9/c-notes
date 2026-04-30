#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	while (n>0) {
		int a = n % 10;
		sum = sum * 10 + a;
		n /= 10;
	}
	while (sum > 0) {
		int x = sum % 10;
		if (sum / 10 != 0) { 
			printf("%d ", x); 
		}
		else {
			printf("%d ", x);
		}
		
		sum /= 10;
	}
	return 0;
}