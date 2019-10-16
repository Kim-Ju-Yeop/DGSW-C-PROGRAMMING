// 25. 100 이하의 정수를 입력받은 정수부터 100까지의 합을 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int total = 0;
	printf("100 이하의 정수를 입력해주세요 : ");
	scanf_s("%d", &num);
	for (i = num; i <= 100; i++)
	{
		total += i;
	}
	printf("합계 : %d", total);
}