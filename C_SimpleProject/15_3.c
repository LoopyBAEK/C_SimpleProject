#include <stdio.h>

int main() {
	int arr[10];

	int odd = 0;
	int even = 0;
	printf("�� 10���� ���� �Է� \n");
	for (int i = 0; i < 10; i++) {
		int num;
		printf("�Է�: ");
		scanf_s("%d", &num);

		if (num % 2 == 1) {
			arr[odd] = num;
			odd++;
		}
		else {
			arr[9 - even] = num;
			even++;
		}
	}

	printf("�迭 ����� ���: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}