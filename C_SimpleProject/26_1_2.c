#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define PI 3.14
#define AREA(R) (R * R) * PI

int main() {
	int rad;
	printf("반지름 길이 입력: ");
	scanf("%d", &rad);

	printf("반지름이 %d인 원의 넓이: %g \n", rad, AREA(rad));
	return 0;
}