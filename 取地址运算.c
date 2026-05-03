#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("%d\n", sizeof(int));
	
	int a = 4;
	printf("%d\n", sizeof(a));
	
	//地址
	printf("%d\n", &a);

	printf("%p\n", &a);
	int * p = &a;
	
	printf("%d\n", p);
	printf("%d\n", &p);

	//解引用
	printf("%d\n", *p);
	return 0;
}