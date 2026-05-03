#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	char ac[] = { 6,3,5,7,9,42,63 };
	char* p =&ac[0];
	char* p5 = &ac[5];

	printf("p = %p\n", p);
	printf("p+1 = %p\n", p+1);
	//*p++ = *p;p++
	printf("*p++ = %d\n", *p++);
	printf("p++ = %p\n", p++);
	printf("p5-p = %d\n", p5-p);
	int ai[] = { 1,2,3,4,5,6 };
	int* q = ai;
	printf("q = %p\n", q);
	printf("q+1 = %p\n", q + 1);
	printf("*(q+1) = %d\n", *(q+ 1));

	return 0;
}