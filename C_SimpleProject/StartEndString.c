#include <stdio.h>

int main() {
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0';	// 9번째 요소에 널 문자 저장
	printf("string: %s \n", str);

	str[6] = '\0';	// 7번째 요소에 널 문자 저장
	printf("string: %s \n", str);

	str[1] = '\0';	// 2번째 요소에 널 문자 저장
	printf("stirng: %s \n", str);
	return 0;
}

// 문자열의 중간에 널 문자를 삽입해서 문자열의 끝을 변경하고 있다.
// 그리고 이렇게 '문자열의 끝'이 변경되었을 때, 변경된 끝을 기준으로 문자열이 출력된다.

// 널 문자의 아스키 코드 값은 0이므로 다음 두 문장은 동일한 문장이다.
// str[8] = '\0';
// str[8] = 0;