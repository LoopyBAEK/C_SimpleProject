#include <stdio.h>

int main()
{
	int num;
	printf("���� �Է�: \n");
	scanf_s("%d", &num);
	num = ~num;
	num = num + 1;
	printf("%d \n", num);
	return 0;
}