#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct student {
	char name[20];		// �л� �̸�
	char stdnum[20];	// �л� ���� ��ȣ
	char school[20];	// �б� �̸�
	char major[20];		// ���� ����
	int year;			// �г�
} Student;

void ShowStudentInfo(Student* sptr) {
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ���� ��ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
}

int main() {
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++) {
		printf("�̸�: "); scanf("%s", arr[i].name);
		printf("��ȣ: "); scanf("%s", arr[i].stdnum);
		printf("�б�: "); scanf("%s", arr[i].school);
		printf("����: "); scanf("%s", arr[i].major);
		printf("�г�: "); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++) {
		ShowStudentInfo(&arr[i]);
	}
	return 0;
}

/*
	����ü�� �������� �ʴ´ٸ�, �ϳ��� �迭�� ��� �����͸� ������ �� ���� �ȴ�. ������ �ټ��� �迭�� �ʿ��ϰ� �ȴ�.
	�׸��� 13�࿡ ���ǵ� �Լ��� �Ű����� ���� �̷��� �������� �� ����. ����� �������� ������ŭ �Ű������� ����Ǿ�� �ϱ� �����̴�.
	�׷��� ����ü�� �ʿ��� ��Ȳ���� ����ü�� �������� ������, �ո����� �ڵ��� �ۼ��� �Ұ���������.
*/