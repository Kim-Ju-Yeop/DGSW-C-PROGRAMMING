// 69. 정수 10개를 입력받아 100 이하 중 가장 큰 값과 100 이상 중 가장 작은 값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int arr[10];
	int i;
	int max;
	int min;
	int count1 = 0;
	int count2 = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	
	}
	
	max = 0;
	min = 0;

	int j = 0;

	for (i = 0; i < 10; i++)
	{
		if (arr[i] < 100)
		{
			if (arr[i] > max)
			{
				max = arr[i];
				count1 = 1;
			}
		}

		
	}



	for (i = 0; i < 10; i++)
	{
		if (arr[i] >= 100)
		{
			if (j == 0)
		{
			min = arr[i];
			j = 1;
		}

		if (arr[i] < min)
		{
			min = arr[i];
			
		}
		count2 = 1;
		}


	}

	if (count1 == 1)
	{

		printf("%d ", max);
	}
	if (count1 == 0)
	{
		printf("없음 ");
	}

	if (count2 == 1)
	{

		printf("%d", min);
	}
	
	
	if (count2 == 0)
	{
		printf("없음");
	}
}
