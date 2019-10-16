// 31. 팩토리얼을 재귀함수를 통해 프로그램을 출력하는 문제를 출력하십시오. 
// 풀이 1
#include <stdio.h>
int factorial(int num,int total) // factorial 함수 선언 입력값과 total 값을 받아준다.
{
	if (num == 0)
		return total;
	total *= num; // total 값에 num값을 곱한다.
	factorial(num - 1, total);
}

int main(void)
{
	int input;
	printf("값을 입력해주세요 : ");
	scanf_s("%d", &input);
	printf("%d! = %d\n", input, factorial(input, 1));

}

// 풀이 2
#include <stdio.h>
int factorial(int num) // factorial 함수 선언 입력값과 total 값을 받아준다.
{
	if (num == 0)
	return 1;

	else
	return num * factorial(num - 1);
}

int main(void)
{
	int input;
	printf("값을 입력해주세요 : ");
	scanf_s("%d", &input);
	printf("%d! = %d\n", input, factorial(input, 1));

}