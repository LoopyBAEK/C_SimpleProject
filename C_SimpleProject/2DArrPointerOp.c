#include <stdio.h>

int main() {
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p \n", arr1);
	printf("arr1+1: %p \n", arr1 + 1);
	printf("arr1+2: %p \n\n", arr1 + 2);		// arr1을 1씩 증가시킬 때마다 8씩 증가

	printf("arr2: %p \n", arr2);
	printf("arr2+1: %p \n", arr2 + 1);			// arr2를 1 증가시킨 결과 12가 증가
	return 0;
}