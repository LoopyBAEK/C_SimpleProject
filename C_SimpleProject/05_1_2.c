#include <stdio.h>

int main()
{
	// double���� �Ǽ� �� ���� �޾Ƽ� ��Ģ���� ��� ���
	double num1, num2;
	scanf_s("%lf %lf", &num1, &num2);
	printf("���� = %f \n", num1 + num2);
	printf("���� = %f \n", num1 - num2);
	printf("���� = %f \n", num1 * num2);
	printf("������ = %f \n", num1 / num2);
	return 0;
}