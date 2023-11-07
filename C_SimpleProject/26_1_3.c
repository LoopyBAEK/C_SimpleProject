#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX(A, B) A > B ? A : B

int main() {
	int num1, num2;
	printf("두 값 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("둘 중 큰 값은 %d이다. \n", MAX(num1, num2));
	return 0;
}