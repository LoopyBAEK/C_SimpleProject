#include <stdio.h>
double CelToFah(double cel) {	// ������ ȭ����
	return 1.8 * cel + 32;
}
double FahToCel(double fah) {	// ȭ���� ������
	return (fah - 32) / 1.8;
}

int main() {
	int sel;
	double temp;
	printf("1. ������ ȭ���� 2. ȭ���� ������: ");
	scanf_s("%d", &sel);
	
	if (sel == 1) {
		printf("���� �µ� �Է�: ");
		scanf_s("%lf", &temp);
		printf("ȭ�� �µ�: %f \n", CelToFah(temp));
	}
	else if (sel == 2) {
		printf("ȭ�� �µ� �Է�: ");
		scanf_s("%lf", &temp);
		printf("���� �µ�: %f \n", FahToCel(temp));
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	return 0;
}