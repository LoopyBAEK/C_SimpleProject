#include <stdio.h>

int main() {
	int num = 10;
	int* ptr1 = &num;	// num�� �ּ� ���� �����ϴ� ������ ���� ptr1
	int* ptr2 = ptr1;	// ������ ���� ptr1�� ��� �ּ� ���� �����ϴ� ������ ���� ptr2

	(*ptr1)++;	// �����ϴ� num�� �� +1
	(*ptr2)++;	// �����ϴ� ptr1�� �����ϴ� num�� �� +1
	printf("%d \n", num);
	return 0;
}