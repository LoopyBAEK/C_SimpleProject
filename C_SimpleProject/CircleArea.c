#include <stdio.h>

int main()
{
	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("���� ����: %f \n", area);
	return 0;
}