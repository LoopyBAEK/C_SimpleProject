#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define PI 3.14
#define AREA(R) (R * R) * PI

int main() {
	int rad;
	printf("������ ���� �Է�: ");
	scanf("%d", &rad);

	printf("�������� %d�� ���� ����: %g \n", rad, AREA(rad));
	return 0;
}