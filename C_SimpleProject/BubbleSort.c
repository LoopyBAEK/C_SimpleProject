#include <stdio.h>

void BubbleSort(int ary[], int len);
void DesSort(int ary[], int len);

int main() {
	int arr[4] = { 3,2,4,1 };
	
	BubbleSort(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	DesSort(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void BubbleSort(int ary[], int len) {
	int temp;

	for (int i = 0; i < len - 1; i++) {		// 오름차순 정렬
		for (int j = 0; j < (len - i) - 1; j++) {
			if (ary[j] > ary[j + 1]) {
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

void DesSort(int ary[], int len) {
	int temp;

	for (int i = 0; i < len - 1; i++) {		// 내림차순 정렬
		for (int j = 0; j < (len - i) - 1; j++) {
			if (ary[j] < ary[j + 1]) {
				temp = ary[j+1];
				ary[j + 1] = ary[j];
				ary[j] = temp;
			}
		}
	}
}