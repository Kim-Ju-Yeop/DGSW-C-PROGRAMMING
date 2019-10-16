// 포인터 1
// 포인터 초기화와 값 대입 
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum; // pnum 포인터를 선언한다.

	pnum = &num1; // pnum에 num1의 주소값을 가져온다.
	(*pnum) += 30; // pnum이 가리키는 값에 30을 더한다.

	pnum = &num2; // pnum에 num2의 주소값을 가져온다.
	(*pnum) -= 30; // pnum이 가리키는 값에 30을 뺀다.

	printf("num1 : %d, num2 : %d\n", num1, num2);
	return 0;
}