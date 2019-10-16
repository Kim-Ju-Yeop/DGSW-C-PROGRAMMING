// 60. 100개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례대로 입력받다가 999가 입력되면 999를 제외하고 그 때까지 입력된 정수 중 최대값과 최소값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int i;
	int j;
	int arr[100];

	for (i = 0; i < 100; i++)
	{
		printf("%d 번째 정수를 입력해주세요 : ", i + 1);
		scanf("%d", &arr[i]);
		
		if (arr[i] == 999)
		{
			break;
		}
	}

	int max = arr[0];
	int min = arr[0];

	for (j = 0; j < i; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
		}
	}

	for (j = 0; j < i; j++)
	{
		if (min > arr[j])
		{
			min = arr[j];
		}
	}

	printf("%d %d", max, min);
	

}
