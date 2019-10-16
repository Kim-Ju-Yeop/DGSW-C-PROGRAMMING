// 24. 100 이하의 양의 정수가 입력될 때 1부터 입력받은 정수까지의 합을 구하여 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int total = 0;
	printf("100 이하의 양의 정수를 입력해주세요 : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
	{
		total += i;
	}
	printf("합계 : %d", total);
}