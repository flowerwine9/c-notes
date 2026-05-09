#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char str[] = "hello";

	printf("%lu\n", strlen(str));
	printf("%lu\n", sizeof(str));



	return 0;
}