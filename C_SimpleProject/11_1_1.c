#include <stdio.h>

int main() {
	int arr[5];
	int sum, max, min;

	for (int i = 0; i < 5; i++) {
		printf("���� �Է�: ");
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

	printf("�Էµ� ���� �߿��� �ִ�: %d \n", max);
	printf("�Էµ� ���� �߿��� �ּڰ�: %d \n", min);
	printf("�Էµ� ������ �� ��: %d \n", sum);
	return 0;
}