#include <stdio.h>

int main()
{
	int dan = 0, num = 1;
	printf("�� ��? ");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d��%d=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}