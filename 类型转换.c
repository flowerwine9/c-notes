#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("%d\n", (char)32768);
	printf("%d\n", (short)32768);
	printf("%d\n", 32768);

	double a = 1.0;
	double b = 2.0;
	int i = (int) a / b;  //先对a进行转换，再四则运算
	
	printf("%d", i);

	return 0;
}