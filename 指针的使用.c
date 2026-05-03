#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void minmax(int a[], int len,int* max, int* min) {
	int i;
	*max = *min = a[0];
	for (i = 1;i < len;i++) {
		if (a[i] > *max) {
			*max = a[i];
		}
		if (a[i] < *min) {
			*min = a[i];
		}
	}
}
int main(){
	int a[10] = { 1,9,5,66,23,41,44,77,8,5};
	int max;
	int min;
	minmax( a,10, &max, &min);
	printf("max = %d min = %d", max,min);
	
	return 0;
}