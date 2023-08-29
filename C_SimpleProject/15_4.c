#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char str[100];
	int len;
	printf("문자열 입력: ");
	scanf_s("%s", str, sizeof(str));

	len = strlen(str);
	bool boolean = true;
	for (int i = 0; i < len/2; i++) {
		if (str[i] != str[--len]) {
			boolean = false;
		}
	}

	if (boolean) {
		printf("회문 입니다. \n");
	}
	else {
		printf("회문이 아닙니다. \n");
	}
	return 0;
}