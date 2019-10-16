// if 문 예제 
#include <stdio.h>
int main()
{
	int num; // 정수를 입력 받을 변수를 선언한다.
	printf("정수를 입력 : ");
	scanf("%d", &num);

	if (num < 0) // num 이 0보다 작을때 조건이 실행한다.
		printf("입력된 값은 0보다 작다.\n");
	if (num > 0) // num 이 0보다 클때 조건이 실행한다.
		printf("입력된 값은 0보다 크다.\n");
	if (num == 0) // num이 0일때 조건이 실행한다.
		printf("입력된 값은 0 이다.");
	
	return 0;
}


