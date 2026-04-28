#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){

	int hour1,hour2;
	int minute1, minute2;
	
	scanf("%d %d", &hour1, &hour2);
	scanf("%d %d", &minute1, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t3 = t1 - t2;

	printf("时间差是%d小时%d分钟",t3 / 60,t3 % 60);

	return 0;

}