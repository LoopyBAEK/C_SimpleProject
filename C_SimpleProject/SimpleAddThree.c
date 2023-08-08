#include <stdio.h>

int main()
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1);	// 첫 번째 정수 입력
	printf("정수 two: ");
	scanf_s("%d", &num2);	// 두 번째 정수 입력

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}

// error C4996 scanf 보안 취약 에러로 scanf_s 함수 사용함