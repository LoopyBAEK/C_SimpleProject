#include <stdio.h>

int main()
{
	int num1 = 10;
	int num2 = (num1--) + 2;	// 후위 감소

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	return 0;
}

// 후위 증가(선 연산, 후 증가) 및 후위 감소(선 연산, 후 감소) 연산 시에는
// 소괄호의 영향을 받지 않고, 다음 문장으로 넘어가야만 비로소 값의 증가 및 감소가 이루어진다.