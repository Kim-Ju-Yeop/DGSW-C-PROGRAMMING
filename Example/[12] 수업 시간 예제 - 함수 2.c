// 함수 예제 2
#include <stdio.h>

int Add(int num1, int num2) // 인자전달 (O) 변환값 (O)
{
	return num1 + num2;
}

void showAddResult(int num) // 인자전달 (O) 변환값 (X)
{
	printf("덧셈결과 출력 : %d\n", num);
}

int ReadNum(void) // 인자전달 (X) 변환값 (O)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) // 인자전달 (X) 변환값 (X)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두개의 정수를 입력해주세요. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg(); // HowToUseThisProg 함수로 이동을 해서 실행한다.
	num1 = ReadNum(); // num1 에 ReadNum 함수를 초기화 하면서 ReadNum으로 이동해 실행한다.
	num2 = ReadNum(); // num2 에 ReadNum 함수를 초기화 하면서 ReadNum으로 이동해 실행한다.
	result = Add(num1, num2); // Add 함수로 이동을하여 입력 받은 num1과 num2들 사용하여 계산을 하라고 Add 함수로 이동한다.
	showAddResult(result); // showAddResult 하무로 이동하여 실행한다.
	return 0;
}
