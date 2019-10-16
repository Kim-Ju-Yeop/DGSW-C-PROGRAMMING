// 47. 사용자로부터 기호를 입력받고 또한 숫자 두개를 입력받아 기호에 맞는 계산을 할 수 있는 계산기를 만드시오
#include <stdio.h>
int sum(int num1, int num2)
{
	int total = 0;
	total = num1 + num2;
	return total;

}

int sub(int num1, int num2)
{
	int total = 0;
	total = num1 - num2;
	return total;

}

int mul(int num1, int num2)
{
	int total = 0;
	total = num1 * num2;
	return total;

}

int div(int num1, int num2)
{
	int total = 0;
	total = num1 / num2;
	return total;

}

int main()
{
	char num;
	int num1;
	int num2;
	printf("계산할 기호 선택 : ");
	scanf("%c", &num);
	printf("%c를 선택하셨습니다.\n\n", num);

	switch (num)
	{
	case '+':
		{
			printf("두 수를 입력 : ");
			scanf("%d %d", &num1, &num2);
			printf("%d + %d = %d", num1, num2, sum(num1, num2));
			break;
		}

	case '-':
	{
		printf("두 수를 입력 : ");
		scanf("%d %d", &num1, &num2);
		printf("%d - %d = %d", num1, num2, sub(num1, num2));
		break;
	}

	case '*':
	{
		printf("두 수를 입력 : ");
		scanf("%d %d", &num1, &num2);
		printf("%d * %d = %d", num1, num2, mul(num1, num2));
		break;
	}

	case '/':
	{
		printf("두 수를 입력 : ");
		scanf("%d %d", &num1, &num2);
		printf("%d / %d = %d", num1, num2, div(num1, num2));
		break;
	}

	}
	
}

