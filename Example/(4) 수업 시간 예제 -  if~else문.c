// if else 문을 사용한 예제
#include <stdio.h>
int main(void)
{
	int num; // 정수 입력 받을 변수를 선언한다.
	printf("정수를 입력해주세요 : ");
	scanf("%d", &num);

	if (num < 0) // num 값이 0보다 작을 때 조건이 실행한다.
		printf("입력 값은 0보다 작습니다.\n");
	else // if(num > 0) 이라고 써주지 않아도 else 문을 통해 더 효율적으로 실행된다. // num이 0보다 클 때 출력된다.
		printf("입력 값은 0보다 큽니다.");
	
	return 0;
}