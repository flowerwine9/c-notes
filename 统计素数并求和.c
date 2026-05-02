#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int cnt = 0;
	int sum = 0;
	int flag = 1;

	for (int i = a;i <= b;i++) {

		flag = 1;
		
			if (i == 2) {
				flag = 1;
				sum += 2;
				cnt++;
			}
			else {
				for (int j = 2;j < i;j++) {
				if (i % j == 0) {
					flag = 0;
					break;
				}


			}

			if (flag == 1) {
				sum += i;
				cnt++;
			}
		}

	}
	printf("%d %d", cnt, sum);
	return 0;
}