// 17. 정수를 절대값으로 변환하고 두 절대값중 큰 절대값을 반환하라
#include <stdio.h>

int GetAbsoValue(int num1) // 절대값으로 바꿔주는 함수 GetAbosoValue 함수 선언
{
	if (num1 < 0)
		return num1 * -1;
	else 
		return num1;
}
int Absocompare(int num1, int num2) // num1 과 num2 중에서 더 큰 수를 판별해주는 Absocompare 함수를 선언
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2)) // if문 안에 GetAbsoValue를 선언해주는 이유는 절대값으로 바꿔주고 판별을 해야한다.
 		return num1;
	else
		return num2;
}



int main(void)
{
	int a, b;
	printf("두개의 입력 : ");
	scanf("%d %d", &a, &b);
	printf("%d와 %d 중 절대값이 큰 정수 : %d", a, b, Absocompare(a, b));
}
