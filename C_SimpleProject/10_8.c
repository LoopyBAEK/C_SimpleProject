#include <stdio.h>
int Recursive(int n, int two) {
	if (n == 0) {
		return two;
	}
	else {
		return Recursive(n - 1, two * 2);
	}
}

int main() {
	int n;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	int two = 1;
	int result = Recursive(n, two);
	printf("2의 %d승은 %d \n", n, result);
	return 0;
}