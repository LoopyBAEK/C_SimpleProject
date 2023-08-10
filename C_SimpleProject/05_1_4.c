#include <stdio.h>

int main()
{
	// 아스키 코드 값을 정수로 받아서 문자로 출력하기
	int code;
	scanf_s("%d", &code);
	printf("%c", code);
	return 0;
}