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

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));			// arr2d�� ù ��° ��Ҹ� ����Ű�鼭 �迭 ��ü�� �ǹ�
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));	// arr2d[0]�� ù ��° ��Ҹ� ����Ű�� 1�ุ �ǹ�
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
	return 0;
}