#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char d = 1;
	char c = '1';
	printf("c = %d\n", d);
	printf("c = %c\n", c);
	printf("c = %d\n", c);
	c = 'a';
	c++;
	printf("c++ = %c\n", c);
	int i;
	char ch;
	scanf("%d %c", &i, &ch);
	printf("i = %d\n", i);
	printf("ch = %c\n", ch);
	printf("ch = %d\n", ch);

	return 0;
}