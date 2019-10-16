// 배열 1
// 배열의 초기화
#include <stdio.h>
int main()
{
	int arr[5]; // arr 변수에 5를 선언한다. // int arr[5] = { 10,20,30,40,50 }; 도 된다.
	int sum = 0;
	int i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
	{
		sum += arr[i]; // arr[i] 의 값에 순차적으로 인덱스 값이 올라가면서 sum 변수에 저장해 나간다.
	}

	printf("배열요소에 저장된 값의 합 : %d\n", sum);
	return 0;
}