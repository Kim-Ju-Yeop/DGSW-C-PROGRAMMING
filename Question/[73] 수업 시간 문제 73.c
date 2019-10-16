// 73. void third 라는 함수를 작성하여 main 함수에서 third 함수로 arr[5]의 배열의 주소를 전달하여 third 함수에서 모든 배열요소의 값을 두 배로 만든 후 main 함수에서 arr[5]의 값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
void third(int*arr)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		arr[i] *= 2;
	}
}
int main()
{
	int arr[5];
	int i;
	for(i=0; i < 5; i++)
	{
		printf("%d 번째 정수를 입력해주세요 : ", i + 1);
		scanf("%d", &arr[i]);
		
	}

	third(&arr);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}
