// if문을 사용한 계산기
#include <stdio.h>
int main(void)
{
	int num, num1, num2 = 0; // num1 은 4개 중 선택용도 num1 과 num2는 값 지정 용도
	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 중 선택하세요 ");
	scanf("%d", &num);

	printf("입력하실 두 정수를 입력하세요 : "); 
	scanf("%d %d", &num1, &num2);
	if (num == 1) // num 값이 1일때만 조건 실행한다.
	
		printf("덧셈 결과는 : %d", num1 + num2);

	if (num == 2) // num 값이 2일때만 조건 실행한다.

		printf("뺄셈 결과는 : %d", num1 - num2);

	if (num == 3) //num 값이 3일때만 조건 실행한다.
		printf("곱셈 결과는 : %d", num1 * num2);

	if (num == 4) // num 값이 4일때만 조건 실행한다.
		printf("나눗셈 결과는 : %d", num1 / num2);

	return 0;

	
}