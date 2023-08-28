#include <stdio.h>

void ShowData(const int* ptr) {
	int* rptr = ptr;	// 이 문장에서 경고 메시지가 발생한다.
	printf("%d \n", *rptr);
	*rptr = 20;
}

int main() {
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}

// ShowData 함수의 매개변수 ptr은 const로 선언되었는데 const로 선언되지 않은 포인터 변수에 대입하고 있다.
// 결과적으로 rptr을 이용해서 ptr이 가리키는 변수에 저장된 값을 변경할 수 없는 상황이 되었다.