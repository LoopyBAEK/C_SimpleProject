// ���� 03-1 [scanf �Լ��� Ȱ��] ���� 2
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%dX%d+%d=%d", num1, num2, num3, num1 * num2 + num3);
	return 0;
}