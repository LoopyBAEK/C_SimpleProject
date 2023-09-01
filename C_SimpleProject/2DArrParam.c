#include <stdio.h>

void ShowArr2DStyle(int(*arr)[4], int column) {		// 배열 요소 전체 출력
	int i, j;
	for (i = 0; i < column; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int Sum2DArr(int arr[][4], int column) {	// 배열 요소의 합 반환
	int i, j, sum = 0;
	for (i = 0; i < column; i++) {
		for (j = 0; j < 4; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

int main() {
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[3][4] = { 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5 };

	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));	// 두 번째 인자로 배열의 세로 길이를 넘겨줌
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("arr1의 합: %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2의 합: %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr2[0])));
	return 0;
}