#include <stdio.h>

int main() {
    int cur, is;

    for (cur = 2; cur < 10; cur++) {
        for (is = 1; is < 10; is++)
            printf("%d��%d=%d \n", cur, is, cur * is);
        printf("\n");
    }

    return 0;
}

// ���� �ۼ��� �ڵ�
//for (int i = 2; i < 10; i++) {
//    for (int j = 1; j < 10; j++) {
//        printf("%d��%d=%d \n", i, j, i * j);
//    }
//}