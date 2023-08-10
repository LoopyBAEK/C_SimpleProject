#include <stdio.h>

int main()
{
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));	// 1
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));	// 2

	printf("size of char add: %d \n", sizeof(num1 + num2));		// 4
	printf("size of short add: %d \n", sizeof(num3 + num4));	// 4

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));	// 1, 2
	return 0;
}

// char형 덧셈결과로 반환된 값의 크기는 1바이트, short형 덧셈결과로 반환된 값의 크기는 2바이트가 될 것 같은데, 출력결과에서는 둘다 4바이트로 나온다.
// int형 연산이 CPU가 성능을 내기에 가장 좋은 연산이다 보니, int보다 작은 크기의 데이터는 int형 데이터로 바꿔서(형변환) 연산이 진행된다.
	// 일반적으로 CPU가 처리하기에 가장 적합한 크기의 정수 자료형을 int로 정의한다. 따라서 int형 연산의 속도가 다른 자료형의 연산속도에 비해서 동일하거나 빠르다.
// char형 변수와 short형 변수는 데이터의 양이 많아서 연산속도보다 데이터의 크기를 줄이는 것이 더 중요한 데이터들의 경우에는 char형, short형 변수가 유용하게 사용된다.
