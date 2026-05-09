#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int mycmp(const char* s1, const char* s2) {
	//int idx = 0;
	//while (1) {

	//	if (s1[idx] != s2[idx])
	//	{
	//		break;
	//	}
	//	else if(s1[idx]=='\0') {
	//		break;
	//	}
	//	idx++;
	//}
	//return s1[idx] - s2[idx];
	//}

	while (*s1 == *s2 && s1 != '\0') {
		s1++;
		s2++;
	}
	return s1 - s2;
}

int main(int argc,char const *argv[]) {
	char a1[] = "abc";
	char a2[] = "Abc";
	printf("%d\n", strcmp(a1, a2));
	printf("%d\n", mycmp(a1, a2));
	printf("%d\n", 'a'-'A');
	return 0;
}