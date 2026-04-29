#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int price = 0;
	int bill = 0;

	printf("请输入金额");
	scanf("%d",&price);
	printf("请输入票面");
	scanf("%d",&bill);

	if (price <= bill) {
		printf("找您%d元\n", bill - price);
	}
	else {
		printf("你的钱不够");
	}
	return 0;
}
