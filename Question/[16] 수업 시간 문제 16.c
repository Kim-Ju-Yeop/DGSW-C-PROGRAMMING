// 정수 10개를 입력받아서 합과 평균을 출력하되 0이 입력되면 바로 합과 평균을 출력하는 프로그램을 작성하시오
// 소수부분은 버리고 정수만 출력하시오
#include <stdio.h>
int main()
{
	int a = 1;
	int i = 0;
	int sum = 0;
	int avg = 0;

	while (a != 0 && i < 11)
	{
		scanf("%d", &a);
		sum += a;
		i++;
	}
	avg = sum / i;
	printf("sum : %d\n", sum);
	printf("avg : %d\n", avg);

}
