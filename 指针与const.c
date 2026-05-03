#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 5;
	int const* p = &a;//½ö¶Ôc99
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	p++;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	return 0;
}