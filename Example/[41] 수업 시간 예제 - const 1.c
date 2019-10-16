// const
// 예제 1
#include <stdio.h>
void ShowAllData(const int * arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}
