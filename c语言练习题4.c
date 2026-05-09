#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//把数组a的五个元素逆序输入到数组b,输出数组b
	int a[5];
	for (int i = 0;i < 5;i++) {
		scanf("%d", &a[i]);
	}

	int b[5];
	for (int i = 0;i < 5;i++) {
		b[i] = a[4-i];
	}

	for (int i = 0;i < 5;i++) {
		printf("%d\n", b[i]);
	}
	return 0;
}