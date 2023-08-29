#include <stdio.h>

int main() {
	int arr[10];

	int odd = 0;
	int even = 0;
	printf("총 10개의 숫자 입력 \n");
	for (int i = 0; i < 10; i++) {
		int num;
		printf("입력: ");
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

	printf("배열 요소의 출력: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}