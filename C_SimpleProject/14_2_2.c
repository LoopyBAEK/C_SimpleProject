#include <stdio.h>

void ShowData(const int* ptr) {
	int* rptr = ptr;	// �� ���忡�� ��� �޽����� �߻��Ѵ�.
	printf("%d \n", *rptr);
	*rptr = 20;
}

int main() {
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}

// ShowData �Լ��� �Ű����� ptr�� const�� ����Ǿ��µ� const�� ������� ���� ������ ������ �����ϰ� �ִ�.
// ��������� rptr�� �̿��ؼ� ptr�� ����Ű�� ������ ����� ���� ������ �� ���� ��Ȳ�� �Ǿ���.