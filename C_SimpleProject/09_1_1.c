#include <stdio.h>
int maxNum(int num1, int num2, int num3);
int minNum(int num1, int num2, int num3);

int main() {
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수: %d \n", maxNum(num1, num2, num3));
	printf("가장 작은 수: %d \n", minNum(num1, num2, num3));
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