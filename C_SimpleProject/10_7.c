#include <stdio.h>

int main() {
	int n;
	printf("��� n �Է�: ");
	scanf_s("%d", &n);

	int i = 0;
	int num = 1;
	while (num < n) {
		num *= 2;
		i++;
	}
	
	printf("������ �����ϴ� k�� �ִ��� %d \n", i);
	return 0;
}