#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	FILE* fp = fopen("data.txt", "wt");
	// ��θ� �������ְ� �ʹٸ� ��θ� �����ؼ� ������ �̸��� �����ص� �ȴ�.
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;	// �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);	// ��Ʈ���� ����
	return 0;
}