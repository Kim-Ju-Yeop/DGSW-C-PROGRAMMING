// switch 문 - 숫자입력 
#include <stdio.h>
int main()
{
	int num;
	printf("1이상 5이하의 정수 입력 : ");
	scanf("%d", &num);

	switch (num) // switch 의 조건
	{
	case 1:
		printf("1은 one\n");
		break; // case 가 1이면 break 문을 실행한다.
	case 2:
		printf("2는 two\n");
		break; // case 가 2이면 break 문을 실행한다.
	case 3:
		printf("3은 three\n");
		break; // case 가 3이면 break 문을 실행한다.
	case 4:
		printf("4는 four\n");
		break; // case 가 4이면 break 문을 실행한다.
	case 5:
		printf("5는 five\n");
		break; // case 가 5이면 break 문을 실행한다.
	default: // 1에서 5까지 중 숫자가 아니면 default 문이 실행한다.
		printf("I don't know\n");
	  
	}
	return 0;
}

