#include <stdio.h>

int main()
{
	int num;
	printf("���� ���� �ϳ� �Է�: ");
	scanf_s("%d", &num);

	int cnt = 0;
	while (cnt < num)
	{
		printf("Hello world! \n");
		cnt++;
	}
	return 0;
}