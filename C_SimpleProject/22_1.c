#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct employee {
	char name[20];	// �̸�
	char pid[20];	// �ֹε�Ϲ�ȣ
	int salary;		// �޿� ����
};

int main() {
	struct employee emp;

	printf("������ �̸� �Է�: ");
	scanf("%s", emp.name);
	printf("�ֹε�Ϲ�ȣ �Է�: ");
	scanf("%s", emp.pid);
	printf("�޿� ���� �Է�: ");
	scanf("%d", &emp.salary);

	printf("������ �̸�: %s \n", emp.name);
	printf("�ֹε�Ϲ�ȣ: %s \n", emp.pid);
	printf("�޿� ����: %d \n", emp.salary);
	return 0;
}