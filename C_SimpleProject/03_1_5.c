// ���� 03-1 [scanf �Լ��� Ȱ��] ���� 5
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("(%d-%d)X(%d+%d)X(%d��%d)=%d", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
//	printf("(%d-%d)X(%d+%d)X(%d%%%d)=%d", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
	return 0;
}