#include <stdio.h>

int main() {
	int korean, english, math;
	printf("국어 점수: ");
	scanf_s("%d", &korean);
	printf("영어 점수: ");
	scanf_s("%d", &english);
	printf("수학 점수: ");
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