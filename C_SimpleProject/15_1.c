#include <stdio.h>

void odd(int arr[], int len) {
	printf("Ȧ�� ���: ");
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d, ", arr[i]);
		}
	}
}

void even(int arr[], int len) {
	printf("¦�� ���: ");
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d, ", arr[i]);
		}
	}
}

int main() {
	int arr[10];

	printf("�� 10���� ���� �Է� \n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf_s("%d", &arr[i]);
	}

	odd(arr, sizeof(arr)/sizeof(int));
	printf("\n");
	even(arr, sizeof(arr) / sizeof(int));
	return 0;
}