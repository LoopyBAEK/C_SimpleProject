#include <stdio.h>

typedef union ubox {	// 공용체 ubox의 정의
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main() {
	UBox ubx;	// 8바이트 메모리 할당
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	ubx.mem3 = 7.15;
	printf("%d \n", ubx.mem1);
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3);
	return 0;
}