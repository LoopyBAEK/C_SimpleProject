#include <stdio.h>

int main()
{
	int num;
	printf("���� �ϳ� �Է�: ");
	scanf_s("%d", &num);

	int dan = 9;
	while (dan > 0)
	{
		printf("%d��%d=%d \n", num, dan, num * dan);
		dan--;
	}
	return 0;
}