#include <stdio.h>

int main() {
	int score[5][5];
	score[4][4] = 0;

	for (int i = 0; i < 4; i++) {
		int stuSum = 0;
		printf("%d��° �л��� ���� �Է� \n", i + 1);
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &score[i][j]);
			stuSum += score[i][j];
		}
		score[i][4] = stuSum;
		score[4][4] += stuSum;	// += ���� score[4][4]�� �ʱ�ȭ���־�� �Ѵ�.
	}

	for (int i = 0; i < 4; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += score[j][i];
		}
		score[4][i] = sum;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d ", score[i][j]);
		}
		printf("\n");
	}
	return 0;
}