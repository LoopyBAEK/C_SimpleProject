#include <stdio.h>

int main() {
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("����2, ����3, ����4 int�� �迭: %d \n", sizeof(arr1));		// 2 * 3 * 4 * sizeof(int) = 96
	printf("����5, ����5, ����5 double�� �迭: %d \n", sizeof(arr2));	// 5 * 5 * 5 * sizeof(double) = 1000
	return 0;
}