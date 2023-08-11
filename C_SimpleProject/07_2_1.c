#include <stdio.h>

int main()
{
	int num = 0;
	int cnt = 0;
	int sum = 0;
	while (cnt < 5)
	{
		while (num <= 0)
		{
			printf("1 이상의 정수 입력: ");
			scanf_s("%d", &num);
		}
		sum += num;
		cnt++;
		num = 0;
	}
	printf("%d \n", sum);
	return 0;
}