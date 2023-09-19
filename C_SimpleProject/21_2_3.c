#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int GetSpaceIdx(char str[]) {
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			return i;
		}
	}
	return -1;	// 공백 문자가 존재하지 않을 경우의 반환
}

int CompName(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2) {	// 이름의 길이가 다르면 서로 다른 이름
		return 0;
	}
	else {
		return !strcmp(str1, str2, idx1);
	}
}

int CompAge(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	int age1 = atoi(&str1[idx1 + 1]);	// str1[idx1+1]이 나이가 저장된 위치
	int age2 = atoi(&str2[idx2 + 1]);	// str2[idx2+1]이 나이가 저장된 위치

	if (age1 == age2) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	char str1[20];
	char str2[20];

	printf("이름 나이 입력 1: ");
	fgets(str1, sizeof(str1), stdin);
	printf("이름 나이 입력 2: ");
	fgets(str2, sizeof(str2), stdin);

	if (CompName(str1, str2)) {
		puts("이름이 동일합니다.");
	}
	else {
		puts("이름이 동일하지 않습니다.");
	}

	if (CompAge(str1, str2)) {
		puts("나이가 같습니다.");
	}
	else {
		puts("나이가 같지 않습니다.");
	}
	return 0;
}