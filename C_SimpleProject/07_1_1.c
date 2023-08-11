#include <stdio.h>

int main()
{
	int num;
	printf("양의 정수 하나 입력: ");
	scanf_s("%d", &num);

	int cnt = 0;
	while (cnt < num)
	{
		printf("Hello world! \n");
		cnt++;
	}
	return 0;
}