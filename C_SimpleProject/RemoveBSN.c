#include <stdio.h>
#include <string.h>

// fgets �Լ� ȣ���� ���� ���ڿ��� �Է� �ް� ������, ���� �������� \n ���ڴ� ���ڿ����� ���ܽ�Ű�� ���� ��
void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ����: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("����: %d, ����: %s \n", strlen(str), str);
	return 0;
}