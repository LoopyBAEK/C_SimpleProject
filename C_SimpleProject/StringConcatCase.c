// strcat, strncat 함수를 사용하면 컴파일 시에 C4996 경고가 발생하기 때문에 아래와 같은 상숫값을 정의하여 경고를 제거한다.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	/**** case 1 ****/
	strcat(str1, str2);
	puts(str1);

	/**** case 2 ****/
	strncat(str3, str4, 7);
	puts(str3);
	return 0;
}