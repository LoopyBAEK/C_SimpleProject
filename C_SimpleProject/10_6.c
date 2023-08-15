#include <stdio.h>
void time(int second) {
	int h = second / 60 / 60;
	int m;
	if (second / 60 % 60 == 0) {
		m = 0;
	}
	else {
		m = second / 60;
	}
	int s = second % 60;

	printf("[h:%d, m:%d, s:%d] \n", h, m, s);
}

int main() {
	int second;
	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf_s("%d", &second);

	time(second);
	return 0;
}