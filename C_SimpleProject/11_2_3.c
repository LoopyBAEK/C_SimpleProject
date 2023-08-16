#include <stdio.h>

int main() {
	char word[100];
	printf("영단어 입력: ");
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

	printf("아스키 코드가 가장 큰 문자는: %c", word[idx]);
	return 0;
}