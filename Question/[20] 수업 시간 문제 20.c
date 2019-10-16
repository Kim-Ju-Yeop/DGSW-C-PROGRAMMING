// 20. 피오나치 수열 출력하는 프로그램을 작성하시오
#include <stdio.h>
int pibonachi(int num) // 피보나치 함수 선언
{
	int i; // 반복문에서 사용할 변수 선언
	int num1 = 0;
	int num2 = 1;
	int num3 = 0; // num1 과 num2 값을 저장할 변수 선언
	if (num == 1) 
		printf("%d", 0);
	else // num의 값이 0 이상이면 0과1을 출력
		printf("%d%d", 0, 1);
	for (i = 0; i < num - 2; i++)// num-2 뜻은 0,1을 출력해줬으니 2개를 빼주어야한다.
	{
		num3 = num1 + num2;
		printf("%d", num3);
		num1 = num2; // num1의 값이 num2의 값으로 할당된다.
		num2 = num3; // num2의 값이 num3의 값으로 할당된다.
		}
}

int main()
{
	int num;
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &num);
	if (num < 1) // num의 값이 1보다 작을시 함수 실행이 안된다.
	{
		printf("계산을 할수 없습니다.");
		return 0;
	}
	pibonachi(num); // 피보나치 함수를 실행한다.
	return 0;
}
