#include <stdio.h>

int main()
{
	int cnt = 0;
	int plus = 0;
	
	while (cnt < 5)
	{
		while (plus < cnt)
		{
			printf("%s ", "O");
			plus++;
		}
		printf("%s \n", "*");
		cnt++;
		plus = 0;
	}
	return 0;
}