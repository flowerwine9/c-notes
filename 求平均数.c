#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int sum = 0;
	int count = 0;
	int num=0;
	scanf("%d", &num);
	while(num!=-1) {
		
			sum += num;
			count++;
			scanf("%d", &num);

	}

	printf("%f", sum / count * 1.0);
	return 0;
}