#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX(A, B) A > B ? A : B

int main() {
	int num1, num2;
	printf("�� �� �Է�: ");
	scanf("%d %d", &num1, &num2);

	printf("�� �� ū ���� %d�̴�. \n", MAX(num1, num2));
	return 0;
}