#include <stdio.h>

int main() {
	char word[100];
	printf("���ܾ� �Է�: ");
	scanf_s("%s", word, 100);

	int len = 0;
	while (word[len] != 0) {
		len++;
	}

	char temp;
	for (int i = 0; i < len / 2; i++) {
		temp = word[i];	// ���� ���� �ӽ÷� ����
		word[i] = word[(len - i) - 1];	// ���� ���ڸ� ������
		word[(len - i) - 1] = temp; // ���� ���ڸ� �ڷ�
	}
	printf("������ ���ܾ�: %s \n", word);
	return 0;
}