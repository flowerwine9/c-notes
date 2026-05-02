#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int cnt = n;
	int range = 1;
	while (cnt != 0) {
		range *= 10;
		cnt--;
	}
	//printf("%d", range);
	for (int i = range / 10;i < range;i++) {
		int t = i;
		int cut = n;
		int sum1 = 1;
		int sum = 0;
		while (t != 0) {
			int ge = t % 10;
			t /= 10;
			cut = n;
			while (cut != 0) {
				sum1*= ge;
				sum += sum1;
				cut--;
			}
		}
		if (sum == i) {
			printf("%d", sum);
		}
	}

	return 0;
}