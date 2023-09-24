#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct dbshort {
	unsigned short upper;
	unsigned short lower;
} DBShort;

typedef union rdbuf {
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
} RDBuf;

int main() {
	RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트: %u \n", buf.sBuf.upper);
	printf("하위 2바이트: %u \n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);
}

/*
	공용체의 적절한 정의를 통해서 4바이트 메모리 공간을 2바이트씩, 그리고 1바이트씩 접근할 수 있다.
*/