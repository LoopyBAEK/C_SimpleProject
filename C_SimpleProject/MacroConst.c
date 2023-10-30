#include <stdio.h>

#define NAME	"홍길동"
#define AGE		24
#define PRINT_ADDR	puts("주소: 경기도 용인시\n");

int main() {
	printf("이름: %s \n", NAME);
	printf("나이: %d \n", AGE);
	PRINT_ADDR;
	return 0;
}

// 위에 보이는 매크로처럼 매크로의 이름은 대문자로 정의하는 것이 일반적이다. 대문자로 정의함으로써 이 식별자가 매크로라는 사실을 부각시킬 수 있기 때문이다.