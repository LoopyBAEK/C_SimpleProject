#include <stdio.h>

int main() {
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));			// arr2d는 첫 번째 요소를 가리키면서 배열 전체를 의미
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));	// arr2d[0]는 첫 번째 요소를 가리키되 1행만 의미
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
	return 0;
}