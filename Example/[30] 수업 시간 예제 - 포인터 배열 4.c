// 포인터 배열 
// 예제 4
#include <Stdio.h>
int main()
{
	int * ptr1 = 0x0010;
	double * ptr2 = 0x0010;

	printf("%p %p\n", ptr1 + 1, ptr1 + 2); // ptr1이 가르키는 주소값의 크기를 1 , 2 증가시킨다.
	printf("%p %p\n", ptr2 + 1, ptr2 + 2); // ptr2가 가르키는 주소값의 크기를 1 , 2 증가시킨다.
	printf("%p %p\n", ptr1, ptr2);

	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);
}
