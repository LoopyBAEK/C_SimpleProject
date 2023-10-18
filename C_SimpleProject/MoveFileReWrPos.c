#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	/* ���� ���� */
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/* ���� ���� */
	fp = fopen("text.txt", "rt");

	/* SEEK_END test */
	// 16, 17��: ������ ��(EOF)���� ������(���� ���� �κ�����) �� ĭ �̵��ϴ�, ���� ��ġ �����ڴ� 8�� ����Ų��. �׷��� 17�࿡���� 8�� ��µȴ�.
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/* SEEK_SET test */
	// 22, 23��: ������ ù ��° �������� 1�������� �� ĭ �ڷ� �̵��ϴ�, ���� ��ġ �����ڴ� 3�� ����Ų��.
	// �׷��� 23�࿡���� 3�� ��µǸ鼭 ���� ��ġ �����ڴ� 4�� ����Ű�� �ȴ�.
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK_CUR test */
	// 27, 28��: ���� ���� ��ġ �����ڴ� 4�� ����Ű�µ�, �� ��ġ���� �ڷ� �� ĭ�� �̵���Ű�� ���� ��ġ �����ڴ� 6�� ����Ű�� �ȴ�. �׷��� 28�࿡���� 6�� ��µȴ�.
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}