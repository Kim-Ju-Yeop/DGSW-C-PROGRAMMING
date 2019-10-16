// 49. 어떤 수를 입력받아 그 수의 팩토리얼을 출력하는 재귀함수를 사용하여 만들어라.
#include <stdio.h>
int main()
{
	int input;
	int total = 1;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &input);
	printf("%d",factorial(input,total));
	
}

int factorial(int input, int total)
{
	if (input == 1)
		
	return total;
	
	total = total * input;
	

	factorial(input-1,total);
}
