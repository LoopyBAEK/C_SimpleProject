#include <stdio.h>

int main() {
	int gugudan[3][9];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d ", gugudan[i][j]);
		}
		printf("\n");
	}
	return 0;
}