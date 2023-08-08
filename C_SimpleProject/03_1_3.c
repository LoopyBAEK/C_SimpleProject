// 문제 03-1 [scanf 함수의 활용] 문제 3
#include <stdio.h>

int main()
{
	int num;
	printf("하나의 정수 입력: ");
	scanf_s("%d", &num);
	printf("%d", num * num);
	return 0;
}