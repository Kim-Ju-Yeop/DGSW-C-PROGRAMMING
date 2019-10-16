// 포인터 2
// 출력의 결과를 예상해보고 실행해보아라
#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr1 = &num; // ptr1 값에 num의 주소값을 저장하라.
	int* ptr2 = ptr1; // prt2 또한 num의 주소값을 가르킨다.

	(*ptr1)++; // ptr1이 가르키는 num의 값 10을 1씩 증가시킨다.
	(*ptr2)++; // ptr2가 가르키는 ptr1 즉 num의 값 11을 1씩 증가시킨다.
	printf("%d\n", num);
}