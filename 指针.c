#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 5;
	int* p = &a;
	printf("a = %d\n", a);
	printf("p = %d\n", p);
	printf("&a = %d\n", &a);
	printf("&p = %d\n", &p);
	
	printf("*p+1 = %d\n", *p + 1);
	*p = 55;
	printf("a = %d\n", a);
	//printf("*(p+1) = %d\n", *(p + 1));

	int b[2] = { 1,2 };
	int* q = &b[1];
	printf("q = %d\n", q);
	printf("&b[1] = %d\n", &b[1]);
	printf("&b[0] = %d\n", &b[0]);
	printf("(q-1) = %d\n", q - 1);

	printf("*(q-1) = %d\n", *(q - 1));

	return 0;
}