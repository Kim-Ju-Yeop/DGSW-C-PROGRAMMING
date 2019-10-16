// 함수 예제 7 
// static 함수
#include <stdio.h>

void SimpleFunc(void) // simpleFunc 라고 이름을 가진 함수 선언
{
	static int num1 = 0; // static 함수 선언 및 초기화 // 초기화를 하지 않아도 자동으로 초기화된다.
	int num2 = 0;
	num1++; 
	num2++;
	printf("static : %d, local : %d\n", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc(); // SimpleFunc 함수로 이동.
	return 0;
}