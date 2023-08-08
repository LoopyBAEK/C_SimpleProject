#include <stdio.h>

int main()
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
	return 0;
}

// error C4996 scanf 보안 취약 에러로 scanf_s 함수 사용함