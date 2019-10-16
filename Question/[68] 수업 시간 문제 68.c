// 68. 0에서 9까지의 정수 중에서 20개의 수를 입력받아 가장 많이 입력받은 숫자와 빈도수를 출력하는 프로그램을 작성하시오 (배열을 사용)
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int num;
	int i;
	int max;
	int index = 0;
	int temp;

	for (i = 0; i < 20; i++)
	{
		scanf("%d", &num);
		arr[num]++;
	}

	max = arr[0];

	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	

	

	printf("%d %d",index,max);

	
}
