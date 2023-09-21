#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct employee {
	char name[20];	// 이름
	char pid[20];	// 주민등록번호
	int salary;		// 급여 정보
};

int main() {
	struct employee arr[3];

	for (int i = 0; i < 3; i++) {
		printf("이름 입력: ");
		scanf("%s", arr[i].name);
		printf("주민등록번호 입력: ");
		scanf("%s", arr[i].pid);
		printf("급여 입력: ");
		scanf("%d", &arr[i].salary);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s %s %d \n", arr[i].name, arr[i].pid, arr[i].salary);
	}
	return 0;
}