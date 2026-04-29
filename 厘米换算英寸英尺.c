#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int limi;
	scanf("%d", &limi);
	
	int foot = limi/30.48;
	double inch = ((limi /30.48)-foot)*12;

	printf("%d %f", foot, inch);
	return 0;
}