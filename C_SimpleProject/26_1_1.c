#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define ADD(A, B, C) A + B + C
#define MUL(A, B, C) A * B * C

int main() {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("�� ������ �������: %d \n", ADD(num1, num2, num3));
	printf("�� ������ �������: %d \n", MUL(num1, num2, num3));
	return 0;
}