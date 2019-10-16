// 9. 2x2 , 4x4 , 6x6 , 8x8 단 만 출력하도록 하여라.
#include <stdio.h>
int main(void)
{
	int dan, num; // dan 은 단 num 은 곱하는 수이다.

	for (dan = 1; dan < 10; dan++) // dan 변수에다가 1을 초기화 시켜주고 for 문을 실행한다.
	{
		if (dan % 2 != 0) // dan의 값에다가 2를 나누어줬을때 0이 안나오면 continue문을 실행한다.
			continue;
		for (num = 1; num < 10; num++) // 이중 for문을 사용하여 곱하는 수 num의 값을 증가시켜준다.
		{
			if (dan < num) // num의 값이 dan의 값보다 더 커지면 break 문을 실행한다.
				break;
			printf("%d X %d = %d\n", dan, num, dan*num);
		}
	}
	printf("\n");
	return 0;
}