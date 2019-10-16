// 58. 100개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례대로 입력받다가 0이 입력되면 0을 제외하고 그 때까지 입력된 정수를 가장 나중에 입력된 정수부터 차례대로 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int arr[100];
	int i;

	for (i = 0; i < 100; i++)
	{
		printf("%d 번째 정수를 입력해주세요 : ", i + 1);
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
		{
			break;
		}
	}
	
	for (i; i > 0; i--)
	{
		printf("%d ", arr[i-1]);
	}
}
