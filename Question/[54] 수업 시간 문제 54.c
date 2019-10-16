// 54. ptr이 가르키는 값을 거꾸로 출력하며 값을 저장하여 출력하라.
#include <stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = &arr[4];
	int i;
	int total = 0;

	for (i = 0; i < 5; i++)
	{
	
		total += (*ptr)--;
	}
	printf("%d", total);
	
}
