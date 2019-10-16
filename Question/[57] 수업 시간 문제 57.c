// 57. 사용자로부터 정수를 입력받아 만약 홀수면 1 부터 입력받은 수 까지 중 홀수만 출력하는 프로그램을 작성해라 만약 짝수를 입력하면 1부터 입력받은 수 까지 중 짝수만 출력하는 프로그램을 작성해라
#include <stdio.h>
int main()
{
	int N;
	int i = 1;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &N);
	
	if (N % 2 != 0)
	{
		one(N,i);
	}

	else
	{
		two(N,i);
	}
}

int one(int N, int i)
{
	if (i == N+1)
	{
		return 0;
	}
	else
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
		}
	}
	return one(N, i + 1);
}

int two(int N, int i)
{
	if (i == N+1)
	{
		return 0;
	}
	else
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}

	return two(N, i + 1);
}
