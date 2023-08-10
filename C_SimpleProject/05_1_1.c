#include <stdio.h>

int main()
{
	// 왼쪽 상단 x, y와 오른쪽 하단 x,y가 주어질 때 직사각형의 넓이 구하기
	int leftX, leftY, rightX, rightY;
	scanf_s("%d %d %d %d", &leftX, &leftY, &rightX, &rightY);
	printf("%d \n", (rightX - leftX )*(rightY - leftY));
	return 0;
}