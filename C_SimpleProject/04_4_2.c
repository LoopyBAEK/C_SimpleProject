#include <stdio.h>

int main()
{
	int three = 3;
	printf("%d ¡¿ 8 ¡À 4 = \n", three);
	three = three << 3;
	three = three >> 2;
	printf("%d \n", three);
	return 0;
}