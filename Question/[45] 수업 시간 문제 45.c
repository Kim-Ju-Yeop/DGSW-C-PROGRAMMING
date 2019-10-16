// 45. 사용자로부터 입력받아 최대값을 구하는 프로그램을 작성하시오
#include <stdio.h>
int main()
{
	int a, b, c = 0;
	int max = 0;
	printf("세 개의 정수를 입력해주세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	max = a;
	if (b > max)
	{
		 max = b;
	}
	if (c > max)
	{
		max = c;
	}

	printf("%d", max);

}
