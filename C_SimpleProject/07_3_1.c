#include <stdio.h>

int main()
{
	// ���� num�� ���� ������ �ʱ�ȭ�ؼ� ù ��° �ݺ������� �˻����� '��'�� �ǰ� �Ѵ�.
	int total = 0; int num = 1;
	while (num != 0) {
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);

	// while���� �����ϱ� ���� ���α׷� ����ڷκ��� ���� 1ȸ �Է� �ް� �Ѵ�.
	int total = 0; int num = 0;
	printf("���� �Է�(0 to quit): ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);
	return 0;
}

