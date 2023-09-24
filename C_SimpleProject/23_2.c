#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct rectangle {
	Point leftTop;	// �� ���
	Point rightBottom;	// �� �ϴ�
} Rectangle;

void RectangleArea(Rectangle rec) {
	printf("����: %d \n", (rec.rightBottom.xpos - rec.leftTop.xpos) * (rec.rightBottom.ypos - rec.leftTop.ypos));
}

void FourDots(Rectangle rec) {
	printf("Left Top: [%d, %d], Right Top: [%d, %d] \n", rec.leftTop.xpos, rec.leftTop.ypos, rec.rightBottom.xpos, rec.leftTop.ypos);
	printf("Left Bottom: [%d, %d], Right Bottom: [%d, %d] \n", rec.leftTop.xpos, rec.rightBottom.ypos, rec.rightBottom.xpos, rec.rightBottom.ypos);
}

int main() {
	Rectangle rectangle = { {0,0}, {100,100} };
	RectangleArea(rectangle);
	FourDots(rectangle);
	return 0;
}