#include <stdio.h>
void gugudan(int num1, int num2);

int main() {
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	gugudan(num1, num2);
	return 0;
}

void gugudan(int num1, int num2) {
	int min, max;
	if (num1 > num2) {
		min = num2;
		max = num1;
	}
	else {
		min = num1;
		max = num2;
	}

	for (int i = min; i <= max; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d×%d=%d \n", i, j, i * j);
		}
	}
}