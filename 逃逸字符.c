#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	//printf("请输入两个数字，""例如\"5 7\"表示数字5与数字7");
	// \b 回退一格
	printf("123\b\n456\n");
	printf("123\bA\n456\n");
	// \t 到下一个表格位
	printf("123\t456\n");
	printf("12\t456\n");
	// \n 换行
	printf("123\n456\n");
	return 0;
}