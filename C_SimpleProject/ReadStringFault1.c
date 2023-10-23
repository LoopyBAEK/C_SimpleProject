#include <stdio.h>

char* ReadUserName() {
	char name[30];
	printf("What's your name? ");
	gets(name);
	return name;	// 무엇을 반환하는가?
}

int main() {
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}

/*
	위 예제의 문제점은 함수 내에 지역적으로 선언된 배열(변수)의 주소 값을 반환하는데 있다.
	함수 내에서 프로그램 사용자로부터 문자열을 입력 받아서 그 결과를 반환하는 것은 좋은데,
	문제는 그 문자열이 저장되어 있는 배열이 지역적으로 선언되었기 때문에 함수를 빠져나오면서 소멸된다는데 있다.
	그래서 실행을 해보면 정상적이지 못한 결과로 이어진다. 간혹 정상적인 결과를 보일 수도 있지만, 이는 우연이며, 결국에 문제를 일으키고 만다.
*/