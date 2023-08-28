#include <stdio.h>

void ShowAllDate(const int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

// arr을 대상으로 const 선언한 이유는 arr에 저장된 값의 변경을 허용하지 않기 위해서이다.
// ShowAllDate 함수는 배열의 전체요소를 출력하는 기능인데, 프로그래머가 실수로 배열요소의 값을 변경하면 안 되기 때문이다.