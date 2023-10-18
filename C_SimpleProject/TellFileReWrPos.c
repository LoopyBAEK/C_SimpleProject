#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long fpos;
	int i;

	/* 파일 생성 */
	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/* 파일 개방 */
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++) {
		putchar(fgetc(fp));
		fpos = ftell(fp);	// 현재 파일 위치 지시자 정보를 변수 fpos에 저장하고 있다. 이로써 파일 위치 지시자를 어디로 이동시키건 다시 이전 위치로 되돌릴 수 있다.
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);	// 위에서 저장해놓은 정보를 참조하여 파일 위치 지시자를 이전의 위치로 되돌리고 있다.
	}
	fclose(fp);
	return 0;
}