#include <stdio.h>
void Fibo(int num);

int main() {
	int num;
	printf("피보나치 수열을 위한 정수 입력: ");
	scanf_s("%d", &num);

	Fibo(num);
	return 0;
}

void Fibo(int num) {
	int fibo = 0;
	int f1 = 0;
	int f2 = 1;

	if (num == 1) {
		printf("%d \n", f1);
	}
	else {
		printf("%d %d ", f1, f2);
	}

	for (int i = 0; i < num - 2; i++) {
		fibo = f1 + f2;
		f1 = f2;
		f2 = fibo;
		printf("%d ", fibo);
	}
}