#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int time;
	scanf("%d", &time);
	int hour1 = time / 100;
	int minute1 = time % 100;

	int lag;
	scanf("%d",&lag);

	int Summinute = lag+(hour1*60)+minute1;
	
	int hour2 = Summinute/60;
	int minute2 = Summinute%60;

	
	printf("%d",hour2*100+minute2);
	return 0;
}