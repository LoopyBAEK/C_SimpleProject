#include <stdio.h>

int main() {
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", str, 50);	// 문자열을 입력받아서 배열 str에 저장
	printf("입력 받은 문자열: %s \n", str);	// 문자열을 입력받는 배열의 이름 앞에는 & 연산자를 붙이면 안 된다.

	printf("문자 단위 출력: ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}

// 8행 warning C4473: 'scanf_s': 서식 문자열에 대한 인수가 충분하게 전달되지 않았습니다. 발생으로 변수 크기까지 작성함
// scanf_s는 %s를 사용할 때 오류가 발생함. scanf_s 함수와 같이 _s가 붙은 함수들은 문자열을 받을 때
// 사용자가 입력한 문자의 개수가 메모리의 크기를 넘어서는 문제를 막기 위해 사용할 메모리의 크기를 명시해야 한다.