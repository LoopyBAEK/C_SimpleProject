// 문제 03-1 [scanf 함수의 활용] 문제 1
#include <stdio.h>

int main()
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d X %d = %d \n", num1, num2, num1 * num2);
	return 0;
}