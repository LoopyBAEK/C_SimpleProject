#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char str[100];
	int len;
	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, sizeof(str));

	len = strlen(str);
	bool boolean = true;
	for (int i = 0; i < len/2; i++) {
		if (str[i] != str[--len]) {
			boolean = false;
		}
	}

	if (boolean) {
		printf("ȸ�� �Դϴ�. \n");
	}
	else {
		printf("ȸ���� �ƴմϴ�. \n");
	}
	return 0;
}