/* 문제 1)
   A배열에 10개의 정수를 입력받아 B 배열에 A배열에서 입력받은 정수를 거꾸로 저장하여 B 배열을 통해 출력하는 프로그램을 작성하시오. */

#include <stdio.h>
int main()
{
	int arr1[10];
	int arr2[10];
	int i;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}

	for (i = 9; i >= 0; i--)
	{
		arr2[j] = arr1[i];
		j++;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
}