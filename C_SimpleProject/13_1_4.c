#include <stdio.h>

int main() {
	int arr[6] = { 1, 2, 3, 4, 5, 6 };

	int* front = arr;
	int* back = &arr[5];

	for (int i = 0; i < 3; i++) {
		int temp = *front;
		*front = *back;
		*back = temp;
		front++;
		back--;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}