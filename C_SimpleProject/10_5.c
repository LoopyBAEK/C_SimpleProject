#include <stdio.h>

int main() {
	int num = 1;
	for (int i = 0; i < 10; i++) {
		int prime;
		while (1) {
			num++;
			if (num != 2 && num != 3 && num != 5) {
				if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0) {
					prime = num;
					printf("%d ", prime);
					break;
				}
			}
			else {
				prime = num;
				printf("%d ", prime);
				break;
			}
		}
	}
}