#include <stdio.h>

int main() {
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("높이2, 세로3, 가로4 int형 배열: %d \n", sizeof(arr1));		// 2 * 3 * 4 * sizeof(int) = 96
	printf("높이5, 세로5, 가로5 double형 배열: %d \n", sizeof(arr2));	// 5 * 5 * 5 * sizeof(double) = 1000
	return 0;
}