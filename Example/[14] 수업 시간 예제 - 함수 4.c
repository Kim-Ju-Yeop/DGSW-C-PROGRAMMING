
// 함수 예제 4
// 다양한 형태의 지역변수 예제
#include <stdio.h>
int main(void)
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0; // 지역변수 num 선언과 동시에 0을 초기화
		num++;
		printf("%d번째 반복, 지역변수 num은 %d.\n", cnt + 1, num);
	} // 지역변수 num 이 사라진다.

	if (cnt == 3)
	{
		int num = 7; // 지역변수 num 선언과 동시에 7을 초기화
		num++;
		printf("if문 내에 존재하는 지역변수 num은 %d.\n", num);
	} // 지역변수 num 이 사라진다.
	return 0;
}