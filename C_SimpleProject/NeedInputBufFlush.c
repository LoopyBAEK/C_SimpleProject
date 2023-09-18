#include <stdio.h>

int main() {
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);
	return 0;
}

/*
	엔터 키를 포함하여 총 7문자가 입력되었다. 그런데 9행의 fgets 함수의 인자로 7이 전달되었으니, 널 문자를 제외하고 최대 6문자를 읽어 들인다.
	따라서 \n을 제외한 나머지 여섯 문자만 읽혀지고 \n은 입력 버퍼에 남아있게 된다. 그리고 이어서 12행의 fgets 함수가 호출된다.
	그런데 fgets 함수는 \n을 만날 때까지 읽어 들이는 함수이니, 버퍼에 남아있는 \n만 읽어버리고 만다.
*/