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
	printf("���� �Է�: ");
	scanf_s("%d", &n);

	int two = 1;
	int result = Recursive(n, two);
	printf("2�� %d���� %d \n", n, result);
	return 0;
}