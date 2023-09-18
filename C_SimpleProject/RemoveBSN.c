#include <stdio.h>
#include <string.h>

// fgets 함수 호출을 통해 문자열을 입력 받고 싶지만, 같이 딸려오는 \n 문자는 문자열에서 제외시키고 싶을 때
void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	return 0;
}