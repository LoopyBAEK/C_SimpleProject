// ���� 03-1 [scanf �Լ��� Ȱ��] ���� 1
#include <stdio.h>

int main()
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d X %d = %d \n", num1, num2, num1 * num2);
	return 0;
}