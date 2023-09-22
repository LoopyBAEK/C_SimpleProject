#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct student {
	char name[20];		// 학생 이름
	char stdnum[20];	// 학생 고유 번호
	char school[20];	// 학교 이름
	char major[20];		// 선택 전공
	int year;			// 학년
} Student;

void ShowStudentInfo(Student* sptr) {
	printf("학생 이름: %s \n", sptr->name);
	printf("학생 고유 번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);
}

int main() {
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++) {
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++) {
		ShowStudentInfo(&arr[i]);
	}
	return 0;
}

/*
	구조체를 정의하지 않는다면, 하나의 배열에 모든 데이터를 저장할 수 없게 된다. 때문에 다수의 배열이 필요하게 된다.
	그리고 13행에 정의된 함수의 매개변수 선언도 이렇듯 간단해질 수 없다. 출력할 데이터의 종류만큼 매개변수가 선언되어야 하기 때문이다.
	그래서 구조체가 필요한 상황에서 구조체를 정의하지 않으면, 합리적인 코드의 작성이 불가능해진다.
*/