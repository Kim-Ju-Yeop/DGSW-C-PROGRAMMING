// 26. 자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main(void)
{
	int num; // 줄 수를 입력받을 변수 num
	int i; // 반복을 진행할 변수 i
	int j; // 별의 출력을 진행할 j
	printf("자연수를 입력해주세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) //
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");

		}
		printf("\n");
	}
}