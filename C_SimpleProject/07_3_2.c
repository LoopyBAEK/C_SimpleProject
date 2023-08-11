#include <stdio.h>

int main()
{
	int total = 0;
	int i = 0;
	do
	{
		total += i;
		i += 2;
	} while (i <= 100);
	printf("%d", total);
	return 0;
}