#include <stdio.h>

int main()
{
    int cur = 2;
    int is = 0;
    
    while (cur < 10)   // 2�ܺ��� 9�ܱ��� �ݺ�
    {
        is = 1; // ���ο� ���� ������ ���ؼ�
        while (is < 10)    // �� ���� 1���� 9�� ���� ǥ��
        {
            printf("%d��%d=%d \n", cur, is, cur * is);
            is++;
        }
        cur++;  // ���� ������ �Ѿ�� ���� ����
    }
    return 0;
}

// ���� �ۼ��� �ڵ�
// int dan = 2;

//  while (dan < 10)	// 2�ܺ��� 9�ܱ��� �ݺ�
//  {
//      int i = 1;	// ���ο� ���� ������ ��
//      while (i < 10)	// �� ���� 1���� 9������ ��
//      {
//          printf("%d��%d=%d \n", dan, i, dan * i);
//          i++;
//      }
//      dan++;
//  }