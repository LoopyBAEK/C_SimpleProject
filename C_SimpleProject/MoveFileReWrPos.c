#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	/* 파일 생성 */
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/* 파일 개방 */
	fp = fopen("text.txt", "rt");

	/* SEEK_END test */
	// 16, 17행: 파일의 끝(EOF)에서 앞으로(파일 시작 부분으로) 두 칸 이동하니, 파일 위치 지시자는 8을 가리킨다. 그래서 17행에서는 8이 출력된다.
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/* SEEK_SET test */
	// 22, 23행: 파일의 첫 번째 데이터인 1에서부터 두 칸 뒤로 이동하니, 파일 위치 지시자는 3을 가리킨다.
	// 그래서 23행에서는 3이 출력되면서 파일 위치 지시자는 4를 가리키게 된다.
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK_CUR test */
	// 27, 28행: 현재 파일 위치 지시자는 4를 가리키는데, 현 위치에서 뒤로 두 칸을 이동시키니 파일 위치 지시자는 6을 가리키게 된다. 그래서 28행에서는 6이 출력된다.
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}