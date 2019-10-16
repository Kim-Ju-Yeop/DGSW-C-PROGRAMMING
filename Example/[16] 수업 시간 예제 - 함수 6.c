// 함수 예제 6
#include <stdio.h>
int Add(int val); 
int num = 1; // 전역변수 num 선언과 동시에 1로 출력한다. // 7~11 15~18 영역구간이 생긴다.

int main(void)
{
	int num = 5; // 지역변수 num 선언과 동시에 5로 초기화 한다.
	printf("num : %d\n", Add(3)); // Add 함수로 이동시켜 덧셈을 시킨다.
	printf("num : %d\n", num + 9); // num 값과 9의 합을 출력시킨다.
	return 0;
}

int Add(int val)
{
	int num = 9; // 지역변수 num 선언과 동시에 9로 초기화 한다.
	num += val; // num 값과 입력받은 값 3을 더한다.
	return num; // num 값을 반환한다.
}