#include <stdio.h>

int main() {
	int ch;

	while (1) {
		ch = getchar();
		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}
	return 0;
}

/*
	Windows를 기준으로 프로그램의 종료를 위해서 Ctrl + Z를 입력하였다.
	참고로 getchar 함수가 호출된다고 해서 하나의 문자만 입력하려고 노력하지 않아도 된다. 문자가 아닌 공백을 포함하는 문장을 입력해도 된다.
	문장이 입력되면 문장을 구성하는 문자의 수만큼 getchar 함수가 호출되면서 모든 문자를 읽어들인다.
*/