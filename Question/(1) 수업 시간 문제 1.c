// 1. 입력받은 정수의 하위 2비트의 값을 출력하는 프로그램 작성하시오.
#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	printf("%d", num & 3 ); // 10 > 1010 // 10만 출력하면 되니까 // 3 > 0011이다. // & AND 비트 연산자 실행
}