#include <stdio.h>

int main() {
	int ch1, ch2;

	ch1 = getchar();	// ���� �Է�
	ch2 = fgetc(stdin);	// ���� Ű �Է�

	putchar(ch1);	// ���� ���
	fputc(ch2, stdout);	// ���� Ű ���
	return 0;
}

/*
	�ҽ� �ڵ� �󿡼��� �и� �� ���� ���ڸ� ������ϰ� �ִ�. �׷��� �������� ���� ����, �ϳ��� ���ڰ� �Էµǰ� ��µ� ������ ���δ�.
	�׷��� �����δ� �� ���� ���ڰ� �Էµǰ� ��µǾ���. �ٸ� �� ��° ���ڰ� '���� Ű'�̴� ���� ���� ���� �ʾ��� ���̴�.
	��� '���� Ű'�� �ƽ�Ű �ڵ� ���� 10�� '\n'���� ǥ���Ǵ� �����̴�. ���� ������� ����� �Ǵ� ���� �翬�ϴ�.

	���� �� ���� ch1�� ch2�� char������ ����Ǿ�� �� �� ������ getchar �Լ��� fgetc �Լ��� ��ȯ���� int�̱� ������ int������ ����Ǿ���.
*/