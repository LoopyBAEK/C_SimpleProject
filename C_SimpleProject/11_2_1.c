#include <stdio.h>

int main() {
	char word[100];
	printf("���ܾ� �Է�: ");
	scanf_s("%s", word, 100);
	
	int len = 0;
	while (word[len] != 0) {	// while(word[len] != '\0') �� ����
		len++;
	}
	printf("�Է��� ���ܾ��� ����: %d \n", len);
	return 0;
}