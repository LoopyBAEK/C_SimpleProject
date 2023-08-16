#include <stdio.h>

int main() {
	char word[100];
	printf("영단어 입력: ");
	scanf_s("%s", word, 100);
	
	int len = 0;
	while (word[len] != 0) {	// while(word[len] != '\0') 와 동일
		len++;
	}
	printf("입력한 영단어의 길이: %d \n", len);
	return 0;
}