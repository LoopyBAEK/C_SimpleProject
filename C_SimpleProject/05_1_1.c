#include <stdio.h>

int main()
{
	// ���� ��� x, y�� ������ �ϴ� x,y�� �־��� �� ���簢���� ���� ���ϱ�
	int leftX, leftY, rightX, rightY;
	scanf_s("%d %d %d %d", &leftX, &leftY, &rightX, &rightY);
	printf("%d \n", (rightX - leftX )*(rightY - leftY));
	return 0;
}