#include <stdio.h>
int ConvCase(int ch) {
	int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {	// �빮��
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z') {	// �ҹ���
		return ch - diff;
	}
	else {
		return -1;
	}
}

int main() {
	int ch;
	printf("���� �Է�: ");
	ch = getchar();
	ch = ConvCase(ch);
	if (ch == -1) {
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch);
	return 0;
}