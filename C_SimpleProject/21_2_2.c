#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {	// \n 제거
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("문자열 입력 1: ");
	fgets(str1, sizeof(str1), stdin);
	printf("문자열 입력 2: ");
	fgets(str2, sizeof(str2), stdin);

	RemoveBSN(str1);
	RemoveBSN(str2);
	strcpy(str3, str1);
	strcat(str3, str2);
	puts(str3);
}