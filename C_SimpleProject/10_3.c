#include <stdio.h>
int getGCD(int num1, int num2) {
	int result;

	int min = num1 < num2 ? num1 : num2;
	while (1) {
		if (num1 % min == 0 && num2 % min == 0) {
			result = min;
			break;
		}
		else {
			min--;
		}

		if (min == 0) {
			result = 0;
			break;
		}
	}
	return result;
}

int main() {
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	
	int gcd = getGCD(num1, num2);
	printf("�� ���� �ִ�����: %d \n", gcd);
	return 0;
}