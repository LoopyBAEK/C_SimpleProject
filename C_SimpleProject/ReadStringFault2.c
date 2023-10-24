#include <stdio.h>
char name[30];

char* ReadUserName() {
	printf("What's your name? ");
	gets(name);
	return name;
}

int main() {
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	
	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);
	return 0;
}

/*
	하나의 전역변수(전역으로 선언된 배열)을 이용하면, 이 전역변수를 덮어쓰게 되기 때문에, 함수호출을 통해서 얻게 된 이름 정보가 유지되지 않는다.
	즉 사용자에게 이름 정보를 입력 받아서 이를 반환하는 함수를 정의하기에는 전역변수도 답이 될 수 없다.
*/