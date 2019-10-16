// 34. 점수를 입력받으면 성적을 출력하는 프로그램을 if,if~else,else문을 사용하여 프로그램을 작성하시오
#include <stdio.h>
int main(void)
{
	int num;
	printf("점수를 입력해주세요 : ");
	scanf_s("%d", &num);

	if (num >= 90)
	{
		printf("A");
	}
	else if (num >= 80)
	{
		printf("B");
	}
	else if (num >= 70)
	{
		printf("C");
	}
	else if (num >= 60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
}

