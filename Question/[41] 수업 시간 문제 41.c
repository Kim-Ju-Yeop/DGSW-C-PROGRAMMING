// 41. 사용자로부터 초(Second)를 입력받아 [시,분,초] 의 형태로 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main()
{
	int num;
	int h, m, s;
	printf("초(Second)를 입력해주세요\n");
	scanf_s("%d", &num);

	h = num / 3600;
	m = num % 3600 / 60;
	s = num % 60;

	printf("[h : %d, m = %d, s : %d]",h,m,s);

}