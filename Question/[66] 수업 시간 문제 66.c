// 66. 자료형 double 변수 height에 172.5를 대입하고 다른 double 포인터 변수 pheight를 선언하여 포인터 변수 pheight를 이용하여 변수 height값을 2.5 증가시킨 후 height 변수를 이용하여 그 값을 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main()
{
	double hegiht = 172.5;
	double * phegiht;

	phegiht = &hegiht;

	*phegiht += 2.5;

	printf("%f", phegiht);
}
