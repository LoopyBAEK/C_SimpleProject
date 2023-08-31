#include <stdio.h>

void MaxAndMin(int** maxPtr, int** minPtr, int* arr, int size) {
	int* max = &arr[0];
	int* min = &arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > *max) {
			max = &arr[i];
		}
		if (arr[i] < *min) {
			min = &arr[i];
		}
	}

	*maxPtr = max;
	*minPtr = min;
}

int main() {
	int* maxPtr;
	int* minPtr;
	int arr[5];

	for (int i = 0; i < 5; i++) {
		printf("���� �Է� %d: ", i+1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr,sizeof(arr)/sizeof(int));
	printf("�ִ�: %d, �ּ�: %d \n", *maxPtr, *minPtr);
	printf("�ִ� Address: %p, �ּ� Address: %p \n", maxPtr, minPtr);
	return 0;
}