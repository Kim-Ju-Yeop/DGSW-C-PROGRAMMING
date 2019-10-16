// 64. 100이하의 자연수를 입력받다가 0이 입력되면 그 때까지 입력된 정수 중 5의 배수의 개수, 합, 평균을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int num[100];
	int i = 0;
	int five = 0;
	int total = 0;
	float avg;

	while (1)
	{
		
		scanf("%d", &num[i]);
		if (num[i] == 0)
		{
			break;
		}
		if (num[i] % 5 == 0)
		{
			total += num[i];
			five++;
		}
		i++;
	}

	avg = (float)total / five;

	printf("%d %d %.1f", five, total, avg);
}
