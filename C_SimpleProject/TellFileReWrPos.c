#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long fpos;
	int i;

	/* ���� ���� */
	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/* ���� ���� */
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++) {
		putchar(fgetc(fp));
		fpos = ftell(fp);	// ���� ���� ��ġ ������ ������ ���� fpos�� �����ϰ� �ִ�. �̷ν� ���� ��ġ �����ڸ� ���� �̵���Ű�� �ٽ� ���� ��ġ�� �ǵ��� �� �ִ�.
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);	// ������ �����س��� ������ �����Ͽ� ���� ��ġ �����ڸ� ������ ��ġ�� �ǵ����� �ִ�.
	}
	fclose(fp);
	return 0;
}