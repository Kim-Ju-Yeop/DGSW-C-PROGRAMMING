// 29. static 변수의 활용
#include <stdio.h>

int AddTotal(int num) // 입력받은 num 값을 계산한다.
{	
	static total; // static total 선언 // 초기화를 하지 않아도 static 함수는 자동으로 0으로 초기화된다.
	total += num;
	return total; // total 값을 반환한다.
}

int main(void)
{
	int num, i; // 지역변수 선언
	for (i = 0; i < 3; i++)
	{
		printf("입력%d : ", i + 1);
		scanf_s("%d", &num);
		printf("누적 : %d\n", AddTotal(num)); // AddTotal 함수로 이동 하여 계산
	}
	return 0;
}