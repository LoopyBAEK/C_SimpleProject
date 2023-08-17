#include <stdio.h>

int main() {
	int num = 10;
	int* ptr1 = &num;	// num의 주소 값을 저장하는 포인터 변수 ptr1
	int* ptr2 = ptr1;	// 포인터 변수 ptr1에 담긴 주소 값을 저장하는 포인터 변수 ptr2

	(*ptr1)++;	// 참조하는 num의 값 +1
	(*ptr2)++;	// 참조하는 ptr1이 참조하는 num의 값 +1
	printf("%d \n", num);
	return 0;
}