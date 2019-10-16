// for 문 중첩 문 <구구단>
#include <stdio.h>
int main()
{
	int a, b; // a는 "단" 을 의미하고 b는 " 곱하는 수" 를 의미한다.
	for (a = 2; a < 10; a++) // a를 2로 초기화 한다.
	{
		for (b = 1; b < 10; b++) // for문 안에 for문을 중첩한다.
		{
			printf("%d X %d = %d\n", a, b, a*b);
			
		}
		printf("\n"); // 칸을 띄운다.
	}
	return 0;
}
