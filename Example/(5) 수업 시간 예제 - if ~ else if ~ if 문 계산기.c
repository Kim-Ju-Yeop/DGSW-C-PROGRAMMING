// if ~ else if ~ else 문을 사용하여 계산기를 출력해보자.
#include <stdio.h>
int main()
{
	int num, num1, num2; // num은 4개중 선택을 받는 변수이고 num1과 num2는 정수를 입력받는 변수이다.


	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 중 선택하십시오");
	scanf("%d", &num);
	printf("두 정수를 입력해주세요");
	scanf("%d %d", &num1, &num2);

	if (num == 1) // num이 1일때 조건을 실행한다
		printf("덧셈 결과 : ", num1 + num2);
	else if (num == 2) // num이 2일때 조건을 실행한다
		printf("뺄셈 결과 : ", num1 - num2);
	else if (num == 3) // num이 3일때 조건을 실행한다
		printf("곱셈 결과 : ", num1 * num2);
	else if (num == 4) // num이 4일때 조건을 실행한다
		printf("나눗셈 결과 : ", num1 / num2);
	else // num이 1,2,3,4 이 아니고 다른 수 일때 조건이 실행된다.
		printf("계산할수 없습니다.");
	return 0;
}