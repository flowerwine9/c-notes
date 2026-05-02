#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int i, j, k = a;
	for (i = a;i < a + 4;i++) {
		for (j = a;j < a + 4;j++) {
			for (k = a;k < a + 4;k++) {
				if (i != j && i != k && j != k) {
					printf("%d%d%d ", i, j, k);
				}
			}
		}
	}
	return 0;
}