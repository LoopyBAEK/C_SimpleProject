#include <stdio.h>

void ShowAllDate(const int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

// arr�� ������� const ������ ������ arr�� ����� ���� ������ ������� �ʱ� ���ؼ��̴�.
// ShowAllDate �Լ��� �迭�� ��ü��Ҹ� ����ϴ� ����ε�, ���α׷��Ӱ� �Ǽ��� �迭����� ���� �����ϸ� �� �Ǳ� �����̴�.