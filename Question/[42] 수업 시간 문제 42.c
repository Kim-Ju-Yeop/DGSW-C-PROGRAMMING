// 42. 두개의 정수를 입력하였을때 모두 5이상이면 5를 출력 모두 3이상이면 3을 출력 모두 1이상이면 1을 출력 모두 0이상이면 0을 출력하라
#include <stdio.h>
int main()
{
	int num1, num2;
	printf("두개의 정수를 입력해주세요 : ");
	scanf("%d %d", &num1, &num2);

	if (num1>=5 & num2>=5)
	{
		printf("5 이상입니다.");
		
	}
	else if (num1 >= 3 & num2 >= 3)
	{
		printf("3 이상입니다.");
		
	}
	else if (num1 >= 1 & num2 >= 1)
	{
		printf("1 이상입니다.");

	}
	else
	{
		printf("0 이상입니다.");
	}
	
}
