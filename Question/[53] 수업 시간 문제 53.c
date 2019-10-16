// 53. ptr1 과 ptr2의 저장된 값을 바꾸어 출력하는 프로그램을 출력하시오
#include <stdio.h>
int main()
{
	int num1 = 10, num2 = 20;

	int * ptr1 = &num1;
	int * ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	int temp = 0;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("ptr1 = %d ptr2 = %d", *ptr1, *ptr2);

}
