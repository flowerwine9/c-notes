#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	int digit;
	int sum = 0;
	do {
	
			digit = num % 10;
			if (digit != 0) {
		num /= 10;
		sum = sum * 10 + digit;
	}
	} while (digit!=0);
	printf("%d", sum);
}