#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define ADD(A, B, C) A + B + C
#define MUL(A, B, C) A * B * C

int main() {
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("세 정수의 덧셈결과: %d \n", ADD(num1, num2, num3));
	printf("세 정수의 곱셈결과: %d \n", MUL(num1, num2, num3));
	return 0;
}