#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
	printf("a=%d b=%d\n",a,b );
}
int main() {
	
	int a = 5;
	int b = 6;
	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d", a, b);
	return 0;
}