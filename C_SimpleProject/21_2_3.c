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
	return -1;	// ���� ���ڰ� �������� ���� ����� ��ȯ
}

int CompName(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2) {	// �̸��� ���̰� �ٸ��� ���� �ٸ� �̸�
		return 0;
	}
	else {
		return !strcmp(str1, str2, idx1);
	}
}

int CompAge(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	int age1 = atoi(&str1[idx1 + 1]);	// str1[idx1+1]�� ���̰� ����� ��ġ
	int age2 = atoi(&str2[idx2 + 1]);	// str2[idx2+1]�� ���̰� ����� ��ġ

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

	printf("�̸� ���� �Է� 1: ");
	fgets(str1, sizeof(str1), stdin);
	printf("�̸� ���� �Է� 2: ");
	fgets(str2, sizeof(str2), stdin);

	if (CompName(str1, str2)) {
		puts("�̸��� �����մϴ�.");
	}
	else {
		puts("�̸��� �������� �ʽ��ϴ�.");
	}

	if (CompAge(str1, str2)) {
		puts("���̰� �����ϴ�.");
	}
	else {
		puts("���̰� ���� �ʽ��ϴ�.");
	}
	return 0;
}