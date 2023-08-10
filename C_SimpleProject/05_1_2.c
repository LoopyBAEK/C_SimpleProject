#include <stdio.h>

int main()
{
	// doubleÇü¿¡ ½Ç¼ö µÎ °³¸¦ ¹Þ¾Æ¼­ »çÄ¢¿¬»ê °á°ú Ãâ·Â
	double num1, num2;
	scanf_s("%lf %lf", &num1, &num2);
	printf("µ¡¼À = %f \n", num1 + num2);
	printf("»¬¼À = %f \n", num1 - num2);
	printf("°ö¼À = %f \n", num1 * num2);
	printf("³ª´°¼À = %f \n", num1 / num2);
	return 0;
}