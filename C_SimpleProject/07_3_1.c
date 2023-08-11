#include <stdio.h>

int main()
{
	// 변수 num의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이 되게 한다.
	int total = 0; int num = 1;
	while (num != 0) {
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);

	// while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.
	int total = 0; int num = 0;
	printf("정수 입력(0 to quit): ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	return 0;
}

