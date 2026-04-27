#include<stdio.h>
int main(){
	int foot;
	int inch;
	printf("几尺几寸"); 
	scanf("%d %d",&foot,&inch);
	printf("身高 %.2f",(foot+inch/12.0)*0.3048);
	return 0; 
} 
