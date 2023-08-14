#include <stdio.h>
double CelToFah(double cel) {	// ¼·¾¾¸¦ È­¾¾·Î
	return 1.8 * cel + 32;
}
double FahToCel(double fah) {	// È­¾¾¸¦ ¼·¾¾·Î
	return (fah - 32) / 1.8;
}

int main() {
	int sel;
	double temp;
	printf("1. ¼·¾¾¸¦ È­¾¾·Î 2. È­¾¾¸¦ ¼·¾¾·Î: ");
	scanf_s("%d", &sel);
	
	if (sel == 1) {
		printf("¼·¾¾ ¿Âµµ ÀÔ·Â: ");
		scanf_s("%lf", &temp);
		printf("È­¾¾ ¿Âµµ: %f \n", CelToFah(temp));
	}
	else if (sel == 2) {
		printf("È­¾¾ ¿Âµµ ÀÔ·Â: ");
		scanf_s("%lf", &temp);
		printf("¼·¾¾ ¿Âµµ: %f \n", FahToCel(temp));
	}
	else {
		printf("Àß¸ø ÀÔ·ÂÇÏ¼Ì½À´Ï´Ù.");
	}
	return 0;
}