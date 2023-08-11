#include <stdio.h>

int main()
{
	int num1, num2;
	printf("정수 두 개 입력: ");
	scanf_s("%d %d", &num1, &num2);

	int sum = 0;
	for (int i = num1; num1 <= num2; num1++) {
		sum += num1;
	}
	printf("%d", sum);
	return 0;
}