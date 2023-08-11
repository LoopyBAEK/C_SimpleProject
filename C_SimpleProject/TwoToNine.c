#include <stdio.h>

int main()
{
    int cur = 2;
    int is = 0;
    
    while (cur < 10)   // 2단부터 9단까지 반복
    {
        is = 1; // 새로운 단의 시작을 위해서
        while (is < 10)    // 각 단의 1부터 9의 곱을 표현
        {
            printf("%d×%d=%d \n", cur, is, cur * is);
            is++;
        }
        cur++;  // 다음 단으로 넘어가기 위한 증가
    }
    return 0;
}

// 내가 작성한 코드
// int dan = 2;

//  while (dan < 10)	// 2단부터 9단까지 반복
//  {
//      int i = 1;	// 새로운 단을 시작할 때
//      while (i < 10)	// 각 단의 1부터 9까지의 곱
//      {
//          printf("%d×%d=%d \n", dan, i, dan * i);
//          i++;
//      }
//      dan++;
//  }