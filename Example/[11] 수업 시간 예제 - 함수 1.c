// 함수 예제 1
#include <stdio.h>

int Add(int num1, int num2) // Add라는 함수 이름을 가진 함수를 선언한다. // 지역변수인 num1 과 num2 를 선언해준다.
{
	return num1 + num2; // return 반환값에 num1과 num2를 더하라고 정의한다.
}

int main(void)
{
	int result;
	result = Add(3, 4);
	printf("덧셈결과1 : %d\n", result);
	result = Add(5, 8);
	printf("덧셈결과2 : %d\n", result);
	return 0;

}