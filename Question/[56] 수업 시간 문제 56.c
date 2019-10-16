// 56. 1부터 사용자가 입력한 수 까지 합을 구하는 프로그램을 재귀함수를 사용해서 만들어라.
#include <stdio.h>
int main()
{
	int N;
	int total = 0;
	int i = 1;
	printf("자연수를 입력해주세요 : ");
	scanf("%d", &N);
	
	printf("%d",factorial(N, total,i));
	
	
}

int factorial(int N, int total,int i)
{
	if (i == N+1)
	return total;
	
	else
	{
		total = total + i;
	}

	factorial(N,total,i+1);
}
