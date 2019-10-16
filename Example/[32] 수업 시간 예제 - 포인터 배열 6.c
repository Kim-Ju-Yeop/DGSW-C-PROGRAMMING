// 포인터 배열
// 예제 6
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int * pnum;

	pnum = &num1;
	(*pnum) += 30;
	

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1 : %d, num2 : %d\n", num1, num2);
}
