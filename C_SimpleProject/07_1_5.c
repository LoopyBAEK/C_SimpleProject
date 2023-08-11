#include <stdio.h>

int main()
{
	int num, cnt;
	printf("몇 개의 정수를 입력하시겠습니까? ");
	scanf_s("%d", &cnt);

	int condition = 0;
	int sum = 0;
	while (condition < cnt)
	{
		printf("정수 하나 입력: ");
		scanf_s("%d", &num);
		sum += num;
		condition++;
	}
	printf("%f \n", (double)sum/cnt);
	return 0;
}