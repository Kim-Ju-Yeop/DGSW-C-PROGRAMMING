// 30. 최대공약수를 구하는 프로그램을 작성하십시오.
#include <stdio.h>
int 최대공약수(int a, int b)
{
	int i, j;
	int total = 0;
	j = (a < b) ? a : b;
	for (i = 1; i < j; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			total = i;
		}
	}
	return total;
}

int main(void)
{
	int a, b;
	printf("두개의 정수를 입력해주세요 : ");
	scanf_s("%d %d", &a, &b);
	printf("%d 와 %d 의 최대공약수는 : %d 입니다.", a, b, 최대공약수(a, b));
}

// 유클리드 호제법 - 2개의 자연수 또는 정식의 최대공약수를 구하는 알고리즘의 하나이다. 호제법이란 말은 두 수가 서로 상대방수를 나우서 결국 원하는 수를 얻는 알고리즘을 나타낸다 2개의 자연수 A,B에 대해서 A를 B로 나눈 나머지를 R 이라하면 A와 B의 최대공약수는 B와 R 의 최대공약수와 같다.