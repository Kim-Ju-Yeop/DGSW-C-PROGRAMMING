// 14. 0부터 100까지의 점수를 계속 입력받다가 범위를 벗어나는 수가 입력되면 그 이전까지 입력된 자료의 평규과 합계를 출력하는 프로그램을 작성하시오
// 평균은 반올림하여 소수점 첫째자리 까지 출력하시오
#include <stdio.h>
int main()
{	
	int a = 1;
	int i = 0;
	int sum = 0;
	float avg = 0;
	
	while (a < 101 && 0 < a)
	{
		scanf("%d", &a);
		sum += a;
		i++;
	}
	avg = (float)(sum-a) / (i-1);
	printf("sum : %d\n", sum-a);
	printf("avg : %.1f", avg);
	

}
