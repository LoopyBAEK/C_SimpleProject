#include <stdio.h>

int main() {
	for (int a = 0; a < 10; a++) {
		for (int z = 0; z < 10; z++) {
			if (a == z) continue;
			
			if ((a * 10 + z) + (z * 10 + a) == 99) {
				printf("%d%d + %d%d = %d \n", a, z, z, a, (a * 10 + z) + (z * 10 + a));
			}
		}
	}
	return 0;
}