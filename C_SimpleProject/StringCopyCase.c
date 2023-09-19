// strcpy, strncpy �Լ��� ����ϸ� ������ �ÿ� C4996 ��� �߻��ϱ� ������ �Ʒ��� ���� ������� �����Ͽ� ��� �����Ѵ�.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy(str2, str1);
	puts(str2);

	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);
	// �迭 str3�� ���̰� 5�̴� �� 5���� ���ڰ� ����ȴ�. ��, �� 5���� ���� �ȿ� �� ���ڰ� ���Ե��� �ʴ´ٴ� ������ �ִ�.
	// strncpy �Լ��� ���ڿ��� �ܼ��ϰ� �����Ѵ�. ������ ���ڰ� �� �������� �ƴ����� ������� �ʴ´�.
	// �� ���� �������� ����ؾ� �ϴµ�, �� ���ڰ� �������� �ʱ� ������ ������ �������� ����Ѵ�.

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	// strncpy �Լ��� �� ��° ���ڷ� �迭�� ���� ���̺��� �ϳ� ���� ���� �����ؼ� �� ���ڰ� ���Ե� ������ ���ܵΰ� ���縦 �����Ѵ�.
	// �̾ �迭�� ���� �� ���ڸ� �����Ѵ�.

}

// strcpy�� strncpy�� ���ȼ� ������ #define _CRT_SECURE_NO_WARNINGS �߰�