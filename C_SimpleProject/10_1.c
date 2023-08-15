#include <stdio.h>

int main() {
	int num;
	printf("10진수 정수 입력: ");
	scanf_s("%d", &num);
	printf("%x", num);
	return 0;
}