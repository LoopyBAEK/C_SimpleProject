#include <stdio.h>
int maxNum(int num1, int num2, int num3);
int minNum(int num1, int num2, int num3);

int main() {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("���� ū ��: %d \n", maxNum(num1, num2, num3));
	printf("���� ���� ��: %d \n", minNum(num1, num2, num3));
	return 0;
}

int maxNum(int num1, int num2, int num3) {
	if (num1 > num2) {
		return num1 > num3 ? num1 : num3;
	}
	else {
		return num2 > num3 ? num2 : num3;
	}
}

int minNum(int num1, int num2, int num3) {
	if (num1 < num2 && num1 < num3) {
		return num1;
	}
	else if (num2 < num1 && num2 < num3) {
		return num2;
	}
	else {
		return num3;
	}
}