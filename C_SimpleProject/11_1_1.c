#include <stdio.h>

int main() {
	int arr[5];
	int sum, max, min;

	for (int i = 0; i < 5; i++) {
		printf("정수 입력: ");
		scanf_s("%d", &arr[i]);
	}

	sum = max = min = arr[0];
	for (int i = 1; i < 5; i++) {
		sum += arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("입력된 정수 중에서 최댓값: %d \n", max);
	printf("입력된 정수 중에서 최솟값: %d \n", min);
	printf("입력된 정수의 총 합: %d \n", sum);
	return 0;
}