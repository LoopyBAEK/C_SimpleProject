#include <stdio.h>

void ClearLineFromReadBuffer(void) {
	while (getchar() != '\n');
}

int main() {
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();	// 입력 버퍼 비우기

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);
	return 0;
}

/*
	ClearLineFromReadBuffer 함수는 입력 버퍼를 통째로 비우는 함수가 아니라, \n이 읽혀질 때까지 입력 버퍼에 저장된 문자들을 지우는 함수이다.
	프로그램 사용자가 잘못 입력을 해도, 필요한 만큼만 읽어들이고 나머지는 지워버리기 때문에 정상적으로 동작한다.
*/