#include <stdio.h>

int main()
{
	int num;
	printf("���� ���� �ϳ� �Է�: ");
	scanf_s("%d", &num);

	int cnt = 0;
	while (cnt++ < num)
		printf("%d ", 3 * cnt);
	return 0;
}