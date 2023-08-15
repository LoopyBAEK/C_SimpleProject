#include <stdio.h>

int main() {
	int n;
	printf("상수 n 입력: ");
	scanf_s("%d", &n);

	int i = 0;
	int num = 1;
	while (num < n) {
		num *= 2;
		i++;
	}
	
	printf("공식을 만족하는 k의 최댓값은 %d \n", i);
	return 0;
}