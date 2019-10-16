// 함수 예제 5
#include <stdio.h>
int main(void)
{
	int num = 1; // 영역구간이 일어나는 구간은 어디인가 9번째줄부터 12번째줄까지 힘을 못쓴다.

	if (num == 1)
	{
		int num = 7; // 지역변수 num 선언과 동시에 7을 초기화한다. 
		num += 10;
		printf("if문 내 지역변수 num : %d \n", num);
	} // num 값이 소멸된다.
	
	printf("main 함수 내 지역변수 num : %d \n", num); // main 함수는 아직 1이다.
	return 0;
}