#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	//输入20个数据到数组中，统计其中的正数个数，并计算正数之和

	int a[20] ;
		for (int i = 0;i < 20;i++) {
			scanf("%d", &a[i]);
		}
		int cnt = 0;
		int sum = 0;
		for (int i = 0;i < 20;i++) {
			if (a[i] > 0) {
				cnt++;
				sum += a[i];
			}
		}
	
	printf("个数 = %d, sum = %d", cnt, sum);
	return 0;
}