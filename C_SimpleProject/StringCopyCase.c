// strcpy, strncpy 함수를 사용하면 컴파일 시에 C4996 경고가 발생하기 때문에 아래와 같은 상숫값을 정의하여 경고를 제거한다.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy(str2, str1);
	puts(str2);

	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);
	// 배열 str3의 길이가 5이니 총 5개의 문자가 복사된다. 단, 이 5개의 문자 안에 널 문자가 포함되지 않는다는 문제가 있다.
	// strncpy 함수는 문자열을 단순하게 복사한다. 마지막 문자가 널 문자인지 아닌지는 상관하지 않는다.
	// 널 문자 이전까지 출력해야 하는데, 널 문자가 존재하지 않기 때문에 엉뚱한 영역까지 출력한다.

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	// strncpy 함수의 세 번째 인자로 배열의 실제 길이보다 하나 작은 값을 전달해서 널 문자가 삽입될 공간을 남겨두고 복사를 진행한다.
	// 이어서 배열의 끝에 널 문자를 삽입한다.

}

// strcpy와 strncpy의 보안성 문제로 #define _CRT_SECURE_NO_WARNINGS 추가