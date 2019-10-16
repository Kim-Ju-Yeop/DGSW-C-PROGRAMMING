// 포인터 배열
// 예제 11
#include <stdio.h>
void ShowArayElem(int * param, int len) // 전달받은 배열의 이름을 포인터 param으로 입력받는다.
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", param[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr1[3] = { 1,2,3 }; 
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int)); // 배열의 이름과 배열의 크기를 ShowArayElem 함수에 전달한다.
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int)); 
}
