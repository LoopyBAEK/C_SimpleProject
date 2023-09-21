#include <stdio.h>

struct point {
	int xpos;
	int ypos;
};

int main() {
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos += 1;	// pptr이 가리키는 변수의 멤버 xpos의 값을 1 증가
	pptr->ypos += 2;	// pptr이 가리키는 변수의 멤버 ypos의 값을 2 증가
	printf("[%d %d] \n", (*pptr).xpos, (*pptr).ypos);
	return 0;
}