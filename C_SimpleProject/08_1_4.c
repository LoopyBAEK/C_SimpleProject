#include <stdio.h>

int main() {
	int num1, num2;
	printf("µÎ °³ÀÇ Á¤¼ö ÀÔ·Â: ");
	scanf_s("%d %d", &num1, &num2);
	printf("»¬¼À °á°ú: %d \n", num1 > num2 ? num1 - num2 : num2 - num1);
	return 0;
}