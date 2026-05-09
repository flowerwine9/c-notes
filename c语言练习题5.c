#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//5张100大钞，换成等值的50，20，10，5钞票，每种面值至少1张，输出所有的可能
	int a, b, c, d;
	for (a = 1;a <10 ;a++) {
		for (b = 1;b<22;b++) {
			for (c = 1;c <43 ;c++) {
				for (d = 1;d <= 84;d++) {
					if (a * 50 + b * 20 + c * 10 + d * 5 ==500) {
						printf("五十 = %d, 二十 = %d, 十 = %d 五 = %d\n", a, b, c, d);
					}
				}
			}
		}
	}
	return 0;
}