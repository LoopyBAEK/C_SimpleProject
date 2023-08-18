#include <stdio.h>

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++) {
		*(ptr++) += 2;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	/*printf("%d \n", *ptr += 2);
	printf("%d \n", *(ptr + 1) += 2);
	printf("%d \n", *(ptr + 2) += 2);
	printf("%d \n", *(ptr + 3) += 2);
	printf("%d \n", *(ptr + 4) += 2);*/
	return 0;
}