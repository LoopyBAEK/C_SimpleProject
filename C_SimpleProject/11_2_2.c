#include <stdio.h>

int main() {
	char word[100];
	printf("영단어 입력: ");
	scanf_s("%s", word, 100);

	int len = 0;
	while (word[len] != 0) {
		len++;
	}

	char temp;
	for (int i = 0; i < len / 2; i++) {
		temp = word[i];	// 앞의 문자 임시로 저장
		word[i] = word[(len - i) - 1];	// 뒤의 문자를 앞으로
		word[(len - i) - 1] = temp; // 앞의 문자를 뒤로
	}
	printf("뒤집힌 영단어: %s \n", word);
	return 0;
}