#include <stdio.h>

int main() {
	char str1[] = "My String";	// 변수 형태의 문자열
	char* str2 = "Your String";	// 상수 형태의 문자열
	printf("%s %s \n", str1, str2);

	str2 = "Our String";	// 가리키는 대상 변경
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';	// 문자열 변경 성공
	str2[0] = 'X';	// 문자열 변경 실패
	printf("%s %s \n", str1, str2);		
	return 0;
}

// 컴파일은 되지만 13행에서 문제가 발생한다.
// 6행에서 선언한 문자열은 상수 형태의 문자열이기 때문에 13행에서 문제가 발생한다.
// 문제가 발생하는 형태는 컴파일러에 따라서, 또는 컴파일 모드에 따라서 약간씩 차이가 있다.
// 나는 실행은 되었으나 13행의 연산이 무시되어서 문자열이 변경되지 않음
// 컴파일러의 특성에 관계없이 위 예제의 6행에서 보이는 형태로 선언된 문자열은 상수로 간주하여 그 값을 변경시키지 않아야 함.