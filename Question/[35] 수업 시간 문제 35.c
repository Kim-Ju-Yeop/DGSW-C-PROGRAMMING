// 35. 34번의 문제를 switch문을 이용하여 작성하라
#include <stdio.h>
int main(void)
{
	int num;
	printf("점수를 입력해주세요 : ");
	scanf_s("%d", &num);
	switch (num/10) // num 값과 10을 나누었을 때 몫의 값을 switch 문에 넣는다.
	{
	case 9:
	case 10:
		printf("A");
		break; // 위의 조건이 맞을시 아래의 조건을 들리지 않고 바로 break 한다.
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("E");

	}
}
