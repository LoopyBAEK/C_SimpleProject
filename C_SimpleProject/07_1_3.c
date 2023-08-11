#include <stdio.h>

int main()
{
	int num = 1;
	int sum = 0;
	while (num != 0)
	{
		printf("정수 하나 입력: ");
		scanf_s("%d", &num);
		sum += num;
	}
	printf("정수들의 합: %d \n", sum);
	return 0;
}