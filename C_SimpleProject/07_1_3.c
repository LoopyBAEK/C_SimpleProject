#include <stdio.h>

int main()
{
	int num = 1;
	int sum = 0;
	while (num != 0)
	{
		printf("���� �ϳ� �Է�: ");
		scanf_s("%d", &num);
		sum += num;
	}
	printf("�������� ��: %d \n", sum);
	return 0;
}