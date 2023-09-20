#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct employee {
	char name[20];	// 이름
	char pid[20];	// 주민등록번호
	int salary;		// 급여 정보
};

int main() {
	struct employee emp;

	printf("종업원 이름 입력: ");
	scanf("%s", emp.name);
	printf("주민등록번호 입력: ");
	scanf("%s", emp.pid);
	printf("급여 정보 입력: ");
	scanf("%d", &emp.salary);

	printf("종업원 이름: %s \n", emp.name);
	printf("주민등록번호: %s \n", emp.pid);
	printf("급여 정보: %d \n", emp.salary);
	return 0;
}