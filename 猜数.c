#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(0));
	int num = rand()%100+1;
	
	int count = 0;
	printf("我已经想好一个1到100的数");
	int a;
	do {
		scanf("%d", &a);
		count++;
		if (a > num) {
			printf("大了");
		}
		else if (a < num) {
			printf("小了");
		}
	} while (a != num);
	printf("你用%d次答对",count);
	return 0;
}