// 55. 첫 번째 주소를 가르키는 포인터 ptr1을 선언하고 맨 뒤의 주소를 가르키는 포인터 ptr2를 선언하여 이를 활용하여 6,5,4,3,2,1 거꾸로 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int * ptr1 = &arr[0];
	int * ptr2 = &arr[5];
	int temp;
	int i;
	
	for (i = 0; i < 3; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

		*(ptr2--);
		*(ptr1++);
	}
		
		
	for (int j = 0; j < 6; j++)
	{
		printf("%d ", arr[j]);
	}
}
