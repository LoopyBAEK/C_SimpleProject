#include <stdio.h>

int main() {
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("���� ���: %d \n", num1 > num2 ? num1 - num2 : num2 - num1);
	return 0;
}