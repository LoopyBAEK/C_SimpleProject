#include <stdio.h>

int main()
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}

// %c는 문자 형태로 데이터를 출력(또는 입력)하라는 의미를 지닌다.
// 정수는 출력의 방법에 따라서 문자의 형태로도, 숫자의 형태로도 출력이 가능하다.