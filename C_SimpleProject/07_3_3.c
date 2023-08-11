#include <stdio.h>

int main()
{
	int dan = 2;
	do
	{
		int i = 1;
		do
		{
			printf("%d¡¿%d=%d \n", dan, i, dan * i);
			i++;
		} while (i < 10);
		dan++;
	} while (dan < 10);
	return 0;
}