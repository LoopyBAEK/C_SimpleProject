#include <stdio.h>

int main()
{
	int num, cnt;
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? ");
	scanf_s("%d", &cnt);

	int condition = 0;
	int sum = 0;
	while (condition < cnt)
	{
		printf("���� �ϳ� �Է�: ");
		scanf_s("%d", &num);
		sum += num;
		condition++;
	}
	printf("%f \n", (double)sum/cnt);
	return 0;
}