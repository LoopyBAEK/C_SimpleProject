#include <stdio.h>

int main() {
	char word[100];
	printf("���ܾ� �Է�: ");
	scanf_s("%s", word, 100);

	int len = 0;
	int max = 0;
	int idx;
	while (word[len] != 0) {
		if (word[len] > max) {
			max = word[len];
			idx = len;
		}
		len++;
	}

	printf("�ƽ�Ű �ڵ尡 ���� ū ���ڴ�: %c", word[idx]);
	return 0;
}