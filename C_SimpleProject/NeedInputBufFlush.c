#include <stdio.h>

int main() {
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s \n", perID);
	printf("�̸�: %s \n", name);
	return 0;
}

/*
	���� Ű�� �����Ͽ� �� 7���ڰ� �ԷµǾ���. �׷��� 9���� fgets �Լ��� ���ڷ� 7�� ���޵Ǿ�����, �� ���ڸ� �����ϰ� �ִ� 6���ڸ� �о� ���δ�.
	���� \n�� ������ ������ ���� ���ڸ� �������� \n�� �Է� ���ۿ� �����ְ� �ȴ�. �׸��� �̾ 12���� fgets �Լ��� ȣ��ȴ�.
	�׷��� fgets �Լ��� \n�� ���� ������ �о� ���̴� �Լ��̴�, ���ۿ� �����ִ� \n�� �о������ ����.
*/