#include <stdio.h>

int main() {
	int n;
	printf("n ют╥б: ");
	scanf_s("%d", &n);

	int total = 1;
	for (int i = 1; i <= n; i++) {
		total *= i;
	}
	printf("%d \n", total);
	return 0;
}