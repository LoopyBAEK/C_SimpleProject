// 문제 03-1 [scanf 함수의 활용] 문제 5
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("(%d-%d)X(%d+%d)X(%d÷%d)=%d", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
//	printf("(%d-%d)X(%d+%d)X(%d%%%d)=%d", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
	return 0;
}