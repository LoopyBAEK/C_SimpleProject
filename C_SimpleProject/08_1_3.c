#include <stdio.h>

int main() {
	int korean, english, math;
	printf("���� ����: ");
	scanf_s("%d", &korean);
	printf("���� ����: ");
	scanf_s("%d", &english);
	printf("���� ����: ");
	scanf_s("%d", &math);

	int sum = (korean + english + math) / 3;
	if (sum >= 90) {
		printf("A \n");
	}
	else if (sum >= 80) {
		printf("B \n");
	}
	else if (sum >= 70) {
		printf("C \n");
	}
	else if (sum >= 50) {
		printf("D \n");
	}
	else {
		printf("F \n");
	}
	return 0;
}