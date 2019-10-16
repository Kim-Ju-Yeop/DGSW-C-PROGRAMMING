// 함수 예제 3
#include <stdio.h>
int NumberCompare(int num1, int num2); // NumberCompare 라는 함수의 이름은 가진 함수가 선언되었다.
									   // 전달인자 (O) 반환값 (O) // 선언만 하고 정의는 없다.

int main(void)
{
	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));
	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));
	return 0;
}
