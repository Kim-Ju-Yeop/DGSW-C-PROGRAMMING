// 52. arr 배열에 1,2,3,4,5를 초기화시키고 3,4,5,6,7 을 출력시켜주세요.
#include <stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		*(ptr+i) += 2;

		printf("%d ", arr[i]);
	}
}
