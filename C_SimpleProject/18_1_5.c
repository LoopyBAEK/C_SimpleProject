#include <stdio.h>

int main() {
	int arr[2][2][2] = { 1,2,3,4,5,6,7,8 };
	printf("%d \n", arr[1][0][1]);
	// 대체할 수 있는 문장 5개 이상 제시
	printf("%d \n", (*(arr + 1))[0][1]);
	printf("%d \n", (*(arr[1]) + 0)[1]);
	printf("%d \n", (*(*(*(arr+1)+0)+1)));

	// 3개밖에 못 생각함
	printf("%d \n", (*(arr+1))[0][1]);
	printf("%d \n", (*(*(arr+1)+0))[1]);
	printf("%d \n", *(*(*(arr+1)+0)+1));
	printf("%d \n", (*(arr[1]+0))[1]);
	printf("%d \n", *(arr[1][0]+1));
	return 0;
}